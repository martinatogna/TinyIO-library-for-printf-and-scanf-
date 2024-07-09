# Custom Printf and Scanf Implementation with AXI UART Lite
This project builds upon existing implementations of printf and scanf functionalities sourced from [mpaland/printf](https://github.com/mpaland/printf/tree/master)
 and [MuratovAS/mini-scanf](https://github.com/MuratovAS/mini-scanf). The goal is to redefine the _getchar() and _putchar() functions to utilize the AXI UART Lite IP from Xilinx.

# Project Overview
The project focuses on adapting standard input/output operations (printf and scanf) to communicate over UART using the AXI UART Lite IP core. This approach involves:

Implementing a custom UART structure based on the AXI UART Lite register map as specified in the [Xilinx AXI UART Lite Documentation](https://docs.amd.com/v/u/en-US/pg142-axi-uartlite)
Redefining _getchar() to wait until a character is received (rx becomes non-empty) and then returning it.
Redefining _putchar() to wait until the transmit buffer (tx) is empty before sending a character.
These adaptations are essential to integrate UART communication seamlessly with the printf and scanf functionalities, allowing for serial communication in embedded systems or other applications where UART is utilized.

## File Structure
src/
├── tinyIO.c # Main functions for initialization and interfacing
├── tinyIO.h # Header file for tinyIO functions
├── print.c # Contains the printf implementation from [mpaland/printf](https://github.com/mpaland/printf/tree/master) and _putchar function
├── scan.c # Contains the scanf implementation from [MuratovAS/mini-scanf](https://github.com/MuratovAS/mini-scanf). and _getchar function
├── uart.c # Contains uart_send_char and uart_get_char functions
├── uart.h # Header file for UART functions
└── main.c # Example main file for testing the functions
