# Low-Level Language

This is a simple low-level language interpreter written in C. It was designed to be as lightweight as possible, while still providing basic functionality for creating and running simple programs.

## Features

- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Assignment statements
- If/else statements
- Loops (for and while)

## Getting Started

### Prerequisites

To run this interpreter, you will need a C compiler installed on your computer. The interpreter has been tested with GCC and Clang.

### Building

To build the interpreter, simply run the following command:

```
$ make
```

This will generate an executable called `low-level`.

### Running

To run a program written in the low-level language, simply pass the program file as an argument to the `low-level` executable:

```
$ ./low-level program.ll
```

This will interpret the program and output the result to the console.

## Language Syntax

The syntax of the low-level language is fairly simple. Each statement must end with a semicolon. Here is an example program:

```
x = 2;
y = 3;
z = x + y;
if (z > 5) {
    print("Greater than 5");
} else {
    print("Less than or equal to 5");
}
```

This program sets two variables (`x` and `y`), adds them together and stores the result in `z`, and then prints out a message based on the value of `z`.

## License

This interpreter is released under the MIT License. See LICENSE.txt for more information.
