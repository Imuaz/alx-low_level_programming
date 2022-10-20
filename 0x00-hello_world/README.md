# C - Hello, World

This project introduces me to the basic of C programming language, is touches the following areas;
- The reason why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program.

## Tasks

* **0. Preprocessor**
  * [0-preprocessor](0-preprocessor): A shell script that runs a C file through the preprocessor and save the result into another file.
    * C file name is saved in the variable `$CFILE`
	  * The output is saved in the file `c`
* **1. Compiler**
  * [1-compiler](1-compiler): A shell a script that compiles a C file but does not link
    * C file name is saved in the variable `$CFILE`
	  * The output file is named the same as the C file, but with the extension `.o` instead of `.c`.
	  * for example: if the C file is `main.c`, the output file is `main.o`
* **2. Assembler**
  * [2-assembler](2-assembler):A shell script that generates the assembly code of a C code and save it in an output file
    * The C file name is saved in the variable `$CFILE`
	  * The output file is named the same as the C file, but with the extension `.s` instead of `.c`.
	  * for example: if the C file is `main.c`, the output file is `main.s`
* **3. Name**
  * [3-name](3-name): A shell script that compiles a C file and creates an executable named `cisfun`.
    * The C file name is saved in the variable `$CFILE`
* **4. Hello, puts**
  * [4-puts.c](4-puts.c): A C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
    * the function uses `puts`
	  * the use of `printf` function was not allowed
	  * the program ends with the value `0`
* **5. Hello, printf**
  * [5-printf.c](5-printf.c):C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line
    * Use of `printf` function was allowed
	  * the use of the function `puts` was not allowed
	  * the program returns `0`
	  * the program is compiled without warning when using the `-Wall gcc` option
* **6. Size is not grandeur, and territory does not make a nation**
  * [6-size.c](6-size.c):C program that prints the size of various types on the computer it is compiled and run on.
    * the program produces the exact same output as in the example
	  * Warnings are allowed
	  * the program returns `0`
	  * Installation of the package `libc6-dev-i386` on Linux may be required to test the `-m32 gcc` option with the program
* **7. Intel**
  * [100-intel](100-intel): A shell a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
    * The C file name is saved in the variable `$CFILE`.
	  * The output file is named the same as the C file, but with the extension `.s` instead of `.c`.
	  * for example: if the C file is `main.c`, the output file is `main.s`
* **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
  * [101-quote.c](101-quote.c):C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
    * the use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts` was not allowed
	  * the program returns `1`
	  * the program compiles without any warnings when using the `-Wall gcc` option

## Betty linter

Betty is a linter for C coding style for all projects related to [Holberton School](https://www.holbertonschool.com/).

How to use Betty C coding style for Holberton School

To run the Betty linter just with command `betty <filename>`:
- Go to the [Betty](https://github.com/holbertonschool/Betty) repository
- Clone the [repo](https://github.com/holbertonschool/Betty) to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
 You can now type `betty <filename>` to run the Betty linter!
for more information visit [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
