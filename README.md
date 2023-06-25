# printf
##### A replica of the original C printf function
#### Team: [Adam Sanusi Babatunde](github.com/iAdamo/) & [Damilola Ifabiyi](github.com/Damilolaifabiyi/)
###### Content:
- Project Algorithm
- Project Flowchart
- Project Task
- Compilation

#### 0. Project Algorithm
The function _printf serves the purpose of facilitating formatted printing. Within this program, we have implemented functionality for both basic printing and printing with format specifications.

Based on the content within the parentheses, this function determines whether to utilize simple printing or the utilization of specifiers.
For this project, we made tasks 0 to 1 mandatory parts, as all other 14 advanced tasks.

The first task involved developing a function that only supports the 'c', 's', and '%' specifiers. In the subsequent task, we expanded the functionality by adding more specifiers.

To achieve this, we utilized a main function named _printf(), which takes the string or specifiers as input and passes them to another function called check_format(). Within the check_format() function, we determine the type of specifier present and then forward it to another function responsible for printing the corresponding argument. To better comprehend the working process, you can refer to the provided flowchart.
#### Usage
To use this program, you will need to have all the files present in the repository.
#### Contributing:
We welcome pull requests from the community. If you intend to make major changes, please consider opening an issue first to discuss your proposed modifications.

#### 1. Project Flowchart
<!--PLEASE UPDATE FLOWCHART-->

#### 2. Project Tasks
- 0.. Write a function that produces output according to a format.
     - Prototype: *int _printf(const char *format, ...);*
     - Returns: the number of characters printed (excluding the null byte used to end output to strings)
     - write output to stdout, the standard output stream
     - format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
       - c
       - s
       - %
- 1.. Handle the following conversion specifiers:
     - d
     - i

- 2.. [Request for advance tasks](https://wa.me/message/OOLTVYW5G5VFK1)

#### 3. Compilation
- Your code will be compiled this way:
  - gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
  - You might want to look at the gcc flag *-Wno-format* when testing with your *_printf* and the standard printf.

 __EOF__
