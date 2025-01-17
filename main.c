#include "uart_comm.h"
#include "pico/stdlib.h"
#include <string.h>
#include <stdio.h>

#define DATA_SIZE 256

int main() {
    stdio_init_all();
    const char *message = "Hello from the transmitter, Ganesh!)";
    char buffer[DATA_SIZE];

    // Initialize UART
    uart_init(UART_ID, BAUD_RATE);
    gpio_set_function(TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(RX_PIN, GPIO_FUNC_UART);

    // Transmit data
    printf("Transmitting data: %s\n", message);
    send_string(message);

    // Receive data
    printf("Waiting to receive data...\n");
    receive_string();

    // Print received data
    printf("Received data: %s\n", buffer);

    return 0;
}
