/*
 * FreeRTOS+CLI V1.0.4
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 */

/* Standard includes. */
#include <string.h>
#include <stdio.h>

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOS_CLI_Console.h"

#define cmdMAX_INPUT_BUFFER_SIZE    50

#define cmdMAX_ERROR_SIZE           50

/* DEL acts as a backspace. */
#define cmdASCII_DEL                ( 0x7F )

#define cmdERROR_DELAY              ( 1000 )

/* Const messages output by the command console. */
static const char * const pcStartMessage = "\r\n[Input a command or type help then press ENTER to get started]\r\n>";
static const char * const pcEndOfOutputMessage = "\r\n>";
static const char * const pcNewLine = "\r\n";

static char cErrorString[ cmdMAX_ERROR_SIZE ] = "";

void FreeRTOS_CLIEnterConsoleLoop( xConsoleIO_t consoleIO,
                                   char * pCommandBuffer,
                                   size_t commandBufferLength,
                                   char * pOutputBuffer,
                                   size_t outputBufferLength )
{
    int32_t byteRead, lastByteRead = 0;
    size_t ucCommandIndex = 0;
    BaseType_t xReturned = pdFALSE;

    configASSERT( ( consoleIO.read ) && ( consoleIO.write ) );
    configASSERT( ( pCommandBuffer ) && ( commandBufferLength > 0 ) );
    configASSERT( ( pOutputBuffer ) && ( outputBufferLength > 0 ) );

    memset( pCommandBuffer, 0x00, commandBufferLength );
    memset( pOutputBuffer, 0x00, outputBufferLength );

    consoleIO.write( pcStartMessage, strlen( pcStartMessage ) );

    for( ; ; )
    {
        /* Read characters to input buffer. */
        byteRead = consoleIO.getChar();

        /* A character was entered.  Add it to the string entered so
         * far. Add a null termination to the end of the string.
         * When a \n is entered the complete string will be
         * passed to the command interpreter. */
        if( ( byteRead >= ' ' ) && ( byteRead <= '~' ) )
        {
            if( ucCommandIndex < ( commandBufferLength - 1UL ) )
            {
                pCommandBuffer[ ucCommandIndex++ ] = ( char ) byteRead;
                pCommandBuffer[ ucCommandIndex ] = '\0';
            }
        }
        else if( ( byteRead == '\b' ) || ( byteRead == cmdASCII_DEL ) )
        {
            /* Backspace was pressed.  Erase the last character in the string - if any. */
            if( ucCommandIndex > 0 )
            {
                ucCommandIndex--;
                pCommandBuffer[ ucCommandIndex ] = '\0';
            }
        }
        /* Was it the end of the line? */
        else if( ( byteRead == '\r' ) || ( byteRead == '\n' ) )
        {
            if( lastByteRead != '\r' )
            {
                /* Just to space the output from the input. */
                consoleIO.write( pcNewLine, strlen( pcNewLine ) );

                /* Pass the received command to the command interpreter.  The
                 * command interpreter is called repeatedly until it returns
                 * pdFALSE	(indicating there is no more output) as it might
                 * generate more than one string. */
                do
                {
                    /* Get the next output string from the command interpreter. */
                    xReturned = FreeRTOS_CLIProcessCommand( pCommandBuffer, pOutputBuffer, outputBufferLength - 1 );

                    /* Write the generated string to the output. */
                    consoleIO.write( pOutputBuffer, strlen( pOutputBuffer ) );


                    /* Reset the output buffer to clear any command output. */
                    memset( pOutputBuffer, 0x00, outputBufferLength );
                } while( xReturned != pdFALSE );

                /* All the strings generated by the input command have been
                 * sent.  Clear the command index to receive a new command.
                 * Remember the command that was just processed first in case it is
                 * to be processed again. */
                ucCommandIndex = 0;
            }

            consoleIO.write( pcEndOfOutputMessage, strlen( pcEndOfOutputMessage ) );
        }
        else
        {
            snprintf( cErrorString, cmdMAX_ERROR_SIZE, "Read failed with error %d\n", ( int ) byteRead );
            consoleIO.write( cErrorString, sizeof( cErrorString ) );
            memset( cErrorString, 0x00, cmdMAX_ERROR_SIZE );

            vTaskDelay( pdMS_TO_TICKS( cmdERROR_DELAY ) );
        }

        lastByteRead = byteRead;
    }
}
