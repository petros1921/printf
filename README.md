This is a printf project which is done in teams of 2 people:
* Kidus Yohannes Asfaw
* Petros Worku Legesse

	# Custom Printf

This project involves creating a custom version of the printf function in C.

## Overview

The printf function is used for formatted printing in C. It allows printing data with special formatting like decimals, strings, characters etc.

The goal of this project is to recreate this functionality by implementing a custom printf function.

Key aspects:

- Parse the format string to identify placeholders like %d, %c, %s etc.

- Handle variable number of arguments using va_list, va_start and va_arg.

- Match the placeholders to the correct argument type.

- Format the arguments according to the placeholders.

- Handle flags, width, precision, length modifiers.

- Output the formatted result to stdout.

- Manage memory dynamically if needed.

- Handle errors for invalid format strings.


## Usage

The custom printf will be used similar to the regular printf:

```c
int num = 15;
char *str = "Hello";

custom_printf("Integer: %d, String: %s", num, str);



Testing
The custom printf will be tested with different format strings, data types, edge cases to ensure correct functionality.

Example test cases:

* Test with integers, floats, characters, strings.
* Test width, precision, padding.
* Test invalid placeholders.
* Test missing arguments.
* Check output matches standard printf.



TODO
 - Parse format string
 - Implement variable arguments
 - Handle integers
 - Handle strings
 - Handle modifiers
 - Manage memory
 - Write tests
 - Implement error handling
 - Optimize performance

