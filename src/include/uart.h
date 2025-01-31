#include <stdint.h>

#define UART_BASE_ADDR      0x42c00000
#define UART_CTRL_REG       0x0C
#define UART_TX_FIFO_REG    0x04
#define UART_RX_FIFO_REG    0x00
#define UART_TX_RESET			0x01	/// Reset the transmit FIFO
#define UART_RX_RESET			0x02	/// Reset the receive FIFO
#define UART_TX_EMPTY			0x04	/// Transmit FIFO is empty
#define UART_TX_FULL			0x08	/// Transmit FIFO is full

#define UART_RX_FIFO_NOT_EMPTY		0x01
typedef struct uart_custom {

    volatile uint32_t rx;        /// Receive Data FIFO
    volatile uint32_t tx;        /// Transmit Data FIFO
    volatile uint32_t state_reg;     /// Status Register
    volatile uint32_t ctrl_reg;      /// Control Register
    
       
} uart_t;

extern uart_t *global_uart; 

// Check if the transmitter is empty

_Bool uart_is_tx_empty();

//Check if the receiver is empty
_Bool uart_is_rx_empty();

// Send a single character to the UART
void uart_send_char(uint8_t ch);

// Waits until a character is received on UART (RX) and returns it.
uint32_t uart_get_char();
