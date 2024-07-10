#include "include/tinyIO.h"

int32_t uart_init(uint32_t baseaddr) {

    global_uart = (uart_t *) (intptr_t) baseaddr + UART_RX_FIFO_REG ;
    global_uart->ctrl_reg = UART_RX_RESET | UART_TX_RESET;	

	return 0;
}