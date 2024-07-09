# Custom Printf and Scanf Implementation with AXI UART Lite
This project builds upon existing implementations of printf and scanf functionalities sourced from mpaland/printf and MuratovAS/mini-scanf. The goal is to redefine the _getchar() and _putchar() functions to utilize the AXI UART Lite IP from Xilinx.

Project Overview
The project focuses on adapting standard input/output operations (printf and scanf) to communicate over UART using the AXI UART Lite IP core. This approach involves:

Implementing a custom UART structure based on the AXI UART Lite register map as specified in the Xilinx AXI UART Lite documentation.
Redefining _getchar() to wait until a character is received (rx becomes non-empty) and then returning it.
Redefining _putchar() to wait until the transmit buffer (tx) is empty before sending a character.
These adaptations are essential to integrate UART communication seamlessly with the printf and scanf functionalities, allowing for serial communication in embedded systems or other applications where UART is utilized.
