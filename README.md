# Data-Type-Range-Calculator


This simple C program helps you explore the sizes and ranges of various data types. It provides information on primitive data types and modifiers, as well as the ability to calculate the range of a custom-sized data type.

## Getting Started

To run this program, make sure you have a C compiler installed on your system. Copy the code from `data_type_size_calculator.c` and paste it into a C compiler or save it to a file with a `.c` extension.

### Prerequisites

- C compiler (e.g., GCC)

### Running the Program

1. Open a terminal or command prompt.
2. Navigate to the directory containing the source code file.
3. Compile the code using a C compiler (e.g., `gcc data_type_range_calculator.c -o data_type_range_calculator`).
4. Run the executable (e.g., `./data_type_range_calculator`).

## Features

- List of common primitive data types and their sizes.
- Option to input a custom number of bytes and calculate the corresponding bits.
- Calculation of the total range for a given number of bits.
- Option to specify if the data type is signed or unsigned, with the program providing the appropriate range.

## Usage

1. When prompted, enter "Yes" if you want to see a list of primitive data types and their sizes.
2. Enter the number of bytes for the custom data type.
3. The program will display the number of bits and the total range.
4. Specify if the data type is signed or unsigned.
5. The program will output the range based on the signed/unsigned input.

## Example

```bash
Wanna see a list of datatypes and their size? Yes or No
Yes
---Primitive Datatypes---
Size of char: 1
Size of int: 4
Size of float: 4
Size of double: 8
--Datatype Modifiers--
Size of short int: 2
Size of  long int: 8
Size of long long int: 8
Size of Long Double: 16

Enter number of bytes for the datatype: 3
Bytes to Bit Conversion (1 byte = 8 bits)
Number of bits: 24
Total Range = 16777215
Enter signed or unsigned to get the range (do not use uppercase): signed
Range is -8388608 to 8388607
```

