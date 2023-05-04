# Bit Manipulation Project

This is a bit manipulation project written in C, developed as part of the ALX software engineering program. The project is designed to demonstrate the use of bitwise operators in manipulating individual bits within a byte of memory.

## Features

- Set a bit at a given position
- Clear a bit at a given position
- Toggle a bit at a given position
- Check if a bit at a given position is set or not
- Print the binary representation of a byte

## Getting Started

### Prerequisites

To run the project, you will need a C compiler installed on your computer. The project has been tested with GCC.

### Installation

To build the project, simply run the following command:

```
$ make
```

This will generate an executable called `bit-manipulation`.

### Usage

To use the project, simply run the `bit-manipulation` executable:

```
$ ./bit-manipulation
```

This will provide you with a menu of options to choose from.

## Bit Manipulation Functions

### Set a bit

To set a bit at a given position, use the `set_bit()` function. The function takes two arguments: the byte to modify and the position of the bit to set (0-7).

```c
unsigned char set_bit(unsigned char byte, int position);
```

### Clear a bit

To clear a bit at a given position, use the `clear_bit()` function. The function takes two arguments: the byte to modify and the position of the bit to clear (0-7).

```c
unsigned char clear_bit(unsigned char byte, int position);
```

### Toggle a bit

To toggle a bit at a given position, use the `toggle_bit()` function. The function takes two arguments: the byte to modify and the position of the bit to toggle (0-7).

```c
unsigned char toggle_bit(unsigned char byte, int position);
```

### Check if a bit is set

To check if a bit at a given position is set, use the `is_bit_set()` function. The function takes two arguments: the byte to check and the position of the bit to check (0-7).

```c
int is_bit_set(unsigned char byte, int position);
```

### Print binary representation

To print the binary representation of a byte, use the `print_binary()` function. The function takes one argument: the byte to print.

```c
void print_binary(unsigned char byte);
```

## License

This project is released under the MIT License. See LICENSE.txt for more information.
