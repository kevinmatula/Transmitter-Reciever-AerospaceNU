#include "uart_comm.h"
#include "pico/stdlib.h"

// Function to send a string over UART
void send_string(const char *data) {
    printf("Sending data: %s\n", data);
    uart_puts(UART_ID, data); 
    uart_putc(UART_ID, '\n'); 
}