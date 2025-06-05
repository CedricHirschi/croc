// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

// #include "config.h"
#include "uart.h"
#include "print.h"
// #include "gpio.h"
// #include "util.h"

// #define TB_FREQUENCY 10000000
// #define TB_BAUDRATE 115200

int main()
{
    uart_init();

    printf("He%xo World!\n", 0x11);
    uart_write_flush();

    // // Jump to address 0x10000000
    // asm volatile(
    //     "la a0, 0x10000000\n"
    //     "jalr a0\n");

    return 1;
}