# Custom Printf and Scanf Implementation
This project leverages existing implementations of printf and scanf functionalities sourced from [mpaland/printf](https://github.com/mpaland/printf/tree/master)
 and [MuratovAS/mini-scanf](https://github.com/MuratovAS/mini-scanf) adapting them to integrate seamlessly with custom I/O interfaces commonly found in embedded systems.

# Project Overview
The project focuses on adapting standard input/output operations (printf and scanf) to communicate over UART using the AXI UART Lite IP core. This approach involves:

The core of this project is the implementation of standard input/output operations (printf and scanf) tailored for embedded systems. It includes:
- Implementation of standard printf and scanf functionalities from established libraries.
- Customization of _putchar() to handle output operations efficiently.
- Customization of _getchar() to manage input operations effectively.
It's crucial to customize these implementations to seamlessly integrate with the specific serial communication interfaces.

## File Structure
The project directory is structured as follows:
```plaintext
├── src/
│ ├── include/ # Cartella per i file header
│ │ ├── tinyIO.h # Header file per tinyIO functions
    ├── uart.h  #  Header file per le funzioni UART
    ├── print.h # Header file per le funzioni della printf
    ├── scan.h # Header file per le funzioni della scanf.
│ ├── lib/
│ │ ├── tinyIO.a # Libreria statica tinyIO.a
│ ├── bin/
│ │ ├── main # Eseguibile principale
│ ├── tinyIO.c # Funzioni principali per l'inizializzazione e l'interfacciamento
│ ├── print.c # Implementazione printf da mpaland/printf e funzione _putchar
│ ├── scan.c # Implementazione scanf da MuratovAS/mini-scanf e funzione _getchar
│ ├── uart.c # Funzioni uart_send_char e uart_get_char
│ ├── main.c # File main di esempio per testare le funzioni
│ ├── Makefile # Makefile per la compilazione della libreria e dell'esempio
│ ├── README.md # Questo file readme
```
# Dependencies
The project requires a development environment capable of compiling C/C++ code and targeting the specific architecture (e.g., ARM Cortex-M, Xilinx Zynq).
Ensure that the necessary toolchain and libraries for your target platform are properly installed and configured.

# Setup and Configuration:

1. Clone this repository to your development environment.
2. Customize the serial communication parameters.

# Building the Project:
Use the provided Makefile to compile the project. Adjust the Makefile according to your toolchain and project structure.

# Testing:
1. Modify the main.c or equivalent file to include printf and scanf statements for testing.
2. Ensure correct wiring and configuration of communication interfaces (e.g., UART pins or other communication methods) for your target embedded system.

# Contribution
Contributions to enhance and optimize the project are welcome. Please follow the guidelines:
1. Fork the repository and create a feature branch.
2. Make your changes, test thoroughly, and ensure compatibility.
3. Submit a pull request detailing the changes made and the rationale behind them.

This project demonstrates a robust implementation of standard I/O operations tailored for embedded systems, emphasizing the need to adapt these operations to specific serial communication interfaces for seamless integration and functionality.






 
