String Case Converter Utility

This is a simple C program that converts the case of strings. It takes an input string and converts it to uppercase or lowercase, depending on the user's choice.
Usage

To use this utility, you can compile the source code using make or gcc with the -lcs50 flag. The -lcs50 flag links the program with the cs50 library, which provides functions for handling input and output.
Compilation with make:

bash

make case_manipulator

Compilation with gcc:

bash

gcc -o case_manipulator case_manipulator.c -lcs50

Running the Utility

Once the program is compiled, you can run it from the command line. The program prompts you to enter a string and choose whether to convert it to uppercase or lowercase.

bash

./case_manipulator

Follow the prompts to enter a string and choose the desired case conversion. The program will then display the converted string.
Dependencies

This utility depends on the cs50 library for handling input and output. Make sure to have the cs50 library installed on your system or link the program with the library during compilation using the -lcs50 flag.
License

This project is licensed under the MIT License - see the LICENSE file for details.

