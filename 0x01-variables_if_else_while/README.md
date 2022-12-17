# C-variables_if_else_while

This project require the (man) knowledge of; `ascii `,`scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions.

Generally, I learn about;
- the arithmetic operators and how to use them
- the logical operators (sometimes called boolean operators) and how to use them.
- the relational operators and how to use them
- the values that are considered TRUE and FALSE in C
- the boolean operators and how to use them
- the uses the `if`, `if ... else` statements and the uses of comments.

I also learn;
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- How to print variables using `printf`
- What is the `ASCII` character set
- What are the purpose of the `gcc` flags `-m32` and `-m64`.

## Requirements
**General**
* Allowed editors: `vi`, `vim`, `emacs`.
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files should end with a new line
* A `README.md` file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* the use of `system` is not allowed
* the code uses the `Betty` style. It can be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pll) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## Taks

**0. Positive anything is better than negative nothing**

* [0-positive_or_negative.c](./0-positive_or_negative.c): C program that assigns a random number to the variable `n` each time it is executed.
  - it the completion of this [source code](https://alx-intranet.hbtn.io/rltoken/rrqNDWjrCWdARnWFLPExPw).
	- it prints whether the number stored in the variable `n` is positive or negative
	- the variable `n` stores a different value every time the program is run
	- understanding what `rand`, `srand`, `RAND_MAX` do is not required.
	- the output of the program is;
	  * The number, followed by
		  - if the number is greater than 0: `is positive`
			- if the number is 0: `is zero`
			- if the number is less than 0: `is negative`
		* followed by a new line.

**1. The last digit**

* [1-last_digit.c](./1-last_digit.c): C program that assigns a random number to the variable `n` each time it is executed.
  - it is the completion of this [source code](https://alx-intranet.hbtn.io/rltoken/5HWhPDsq3jq1yCRQFrLl4Q).
	- it prints the last digit of the number stored in the variable `n`.
	- the variable `n `stores a different value every time the program is run.
	- understanding what `rand`, `srand`, and `RAND_    MAX` do is not needed.
	- It is not allowed to touch the given code
	- the output of the program is;
	  * The string `Last digit of`, followed by
		* `n`, followed by
		* `the string is`, followed by
		  * if the last digit of `n` is greater than 5: the string `and is greater than 5`
			* if the last digit of `n` is 0: the string `and is 0`
			* if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
		* followed by a new line

**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

* [2-print_alphabet.c](./2-print_alphabet.c): C program that prints the alphabet in lowercase, followed by a new line.
  - it uses only `putchar` function twice. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code are inside the `main` function as required

**3. alphABET**

* [3-print_alphabets.c](./3-print_alphabets.c):C program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  - it uses only `putchar` function three times. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required

**4. When I was having that alphabet soup, I never thought that it would pay off**

* [4-print_alphabt.c](./4-print_alphabt.c): C program that prints the alphabet in lowercase, followed by a new line.
  - it prints all the letters except `q` and `e`
	- it uses only `putchar` function twice. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main`     function as required

**5. Numbers**

* [5-print_numbers.c](./5-print_numbers.c): C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
  - all the code was written inside the `main` function as required

**6. Numberz**

* [6-print_numberz.c](./6-print_numberz.c):C program that prints all single digit numbers of base 10 starting from `0` using variable of type `char` only and followed by a new line.
  - it uses only `putchar` function twice. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**7. Smile in the mirror**

* [7-print_tebahpla.c](./7-print_tebahpla.c): C program that prints the lowercase alphabet in reverse, followed by a new line.
  - it uses only `putchar` function twice. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**8. Hexadecimal**

* [8-print_base16.c](./8-print_base16.c): C program that prints all the numbers of base 16 in lowercase, followed by a new line.
  - it uses only `putchar` function three times. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**9. Patience, persistence and perspiration make an unbeatable combination for success**

* [9-print_comb.c](./9-print_comb.c): C program that prints all possible combinations of single-digit numbers in ascending order separated by `,`, followed by a space.
  - it does not use any variable of type `char`.
	- it uses only `putchar` function four times. (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**

* [100-print_comb3.c](./100-print_comb3.c):C program that prints all possible different combinations of two digits separated by `,`, followed by a space
  - Note: `01` and `10` considered as the same combination of `0` and `1`.
	- it prints only the smallest combination of two digits
	- it prints numbers in ascending order, with two digits
	- it does not use any variable of type `char    `.
	- it uses only `putchar` function five times    . (every other function (`printf`, `puts`, etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**11. The success combination in business is: Do what you do better... and: do more of what you do...**

* [101-print_comb4.c](./101-print_comb4.c):C program that prints all possible different combinations of three digits separated by `,`, followed by a space.
  - Note: `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
	- it prints only the smallest combination of three digits
	- the printed numbers are in ascending order, with three digits
	- it does not use variable of type `char`.
	- it uses only `putchar` function six times. (every other function (`printf`, `puts`,etc…) is forbidden)
	- all the code was written inside the `main` function as required.

**12. Software is eating the World**

* [102-print_comb5.c](./102-print_comb5.c): C program that prints all possible combinations of two two-digit numbers ranging from `0` to `99` separated by comma, followed by a space.
  - All numbers are printed with two digits. `1` is printed as `01`
	- The combinations of numbers are printed in ascending order
	- Note: `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
	- it does not use any variable of type `cha`.
	- it uses only `putchar` function eight times. (every other function (`printf`, `puts`,etc…) is forbidden)
	- all the code was written inside the `main` function as required.
