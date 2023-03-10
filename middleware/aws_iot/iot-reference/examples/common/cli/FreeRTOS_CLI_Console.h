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

#ifndef FREERTOS_CLI_CONSOLE_H
#define FREERTOS_CLI_CONSOLE_H

#include <stddef.h>
#include <stdint.h>


#include "FreeRTOS_CLI.h"

/**
 * Defines the interface for different console implementations. Interface
 * defines the contract of how bytes are transferred between console
 * and FreeRTOS CLI.
 */
typedef struct xConsoleIO
{
    /**
     * Function reads one character at a time blocking if necessary, when the
     * character is not available. On error it returns a value less than 0.
     */
    int32_t ( * getChar )( void );

    /**
     * Function reads input bytes from the console into a finite length buffer upto the length
     * requested by the second parameter. It stores the number of bytes read within the last parameter.
     * Bytes read which can be less than or equal to the requested value. If no input bytes are available,
     * function can either block or return immediately with 0 bytes read. If there is an error for the
     * read, it returns negative error code.
     * FreeRTOS CLI uses this function to read the command string from input console.
     * The API is not thread-safe.
     *
     */
    int32_t ( * read )( char * const buffer,
                        uint32_t length,
                        uint32_t * pOutLength );

    /**
     * Function writes the output of a finite length buffer to the console. The buffer will be a null
     * terminated string, length of the buffer does not include the null termination.
     * FreeRTOS CLI uses this function to write command output or error logs to the console.
     * The API is not thread-safe.
     */
    void ( * write )( const char * const buffer,
                      uint32_t length );
} xConsoleIO_t;


/**
 * The function executes a non-terminating loop to fetch command from the console, parse
 * and execute a matching command from the list of registered commands, and writes the output back
 * to the console. ConsoleIO interface implementation is passed as argument to the function.
 */
void FreeRTOS_CLIEnterConsoleLoop( xConsoleIO_t consoleIO,
                                   char * pCommandBuffer,
                                   size_t commandBufferLength,
                                   char * pOutputBuffer,
                                   size_t outputBufferLength );

#endif /* ifndef FREERTOS_CLI_CONSOLE_H */
