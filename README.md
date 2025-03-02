# Raspberry Pi Pico UART Communication

## Overview
This project demonstrates UART-based communication between two Raspberry Pi Pico boards, where one acts as a transmitter and the other as a receiver.

## Hardware Requirements
- 2x Raspberry Pi Pico boards
- UART-connected GPIO pins (default: TX and RX pins)
- USB cables for power and programming

## Software Requirements
- Raspberry Pi Pico SDK
- CMake

## File Structure
```
├── main.c                # Entry point for UART communication
├── transmitter.c         # Transmitter code for sending data
├── receiver.c            # Receiver code for receiving data
├── uart_comm.h           # UART communication header file
├── CMakeLists.txt        # CMake build configuration
├── pico_sdk_import.cmake # Pico SDK import script
```

## Compilation and Deployment
### 1. Clone the Repository
```sh
git clone <repository_url>
cd <repository_directory>
```

### 2. Set Up the Pico SDK
Ensure you have the Raspberry Pi Pico SDK installed and configured.
```sh
export PICO_SDK_PATH=<path_to_pico_sdk>
```

### 3. Build the Project
```sh
mkdir build
cd build
cmake ..
make
```
This generates a `.uf2` file for flashing onto the Raspberry Pi Pico.

### 4. Flash the Firmware
1. Hold the button on the Pico and connect it to your computer.
2. Copy the generated `main.uf2` file onto the Pico's mounted USB drive.

## Usage
1. Connect the TX pin of the transmitter Pico to the RX pin of the receiver Pico.
2. The transmitter sends a message, and the receiver prints the received data.

## Expected Output
On the transmitter:
```
Transmitting data: Hello from the transmitter, Ganesh!
```
On the receiver:
```
Received data: Hello from the transmitter, Ganesh!
```

