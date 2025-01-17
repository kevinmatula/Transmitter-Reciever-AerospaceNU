#include "uart_comm.h"
#include "pico/stdlib.h"

// Function to receive a string from UART
void receive_string() {
    printf("Waiting for data...\n");

    char buffer[DATA_SIZE];
    int index = 0;

    while (true) {
        // Read one character at a time
        char c = uart_getc(UART_ID);

        // End of data signal
        if (c == '\n') {
            buffer[index] = '\0';
            break;
        }

        // Store received character in the buffer
        buffer[index++] = c;

        // Prevent buffer overflow
        if (index >= sizeof(buffer) - 1) {
            printf("Buffer overflow!\n");
            break;
        }
    }

    printf("Received data: %s\n", buffer);
}