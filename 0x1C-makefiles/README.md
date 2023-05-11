# 0x1C. C - Makefiles:shell:

**INTRODUCTION**

The project covered a range of topics related to `make` and Makefiles, including their definitions, purposes, and practical applications in software development. It explained how to set and use rules, including explicit and implicit rules, as well as the most common and useful rules used in Makefiles. Additionally, it covered the usage of variables in Makefiles and how to set and use them effectively. Overall, this project provided a comprehensive overview of make and Makefiles and their importance in software development.

## Resources:books:
- [Makefile](https://www.google.com/search?q=makefile#ip=1)
- [Installing the make utility](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
- [make-official documentation](https://www.gnu.org/software/make/manual/html_node/)

## Requirements:pushpin:

**General**
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of make: GNU Make 4.2.1
- All files should end with a new line
- A mandatory [README.md](./README.md) file, at the root of the folder of the project, has been provided

## More Info:fast_forward:

**Files**

In the following tasks, [these files](https://github.com/holbertonschool/0x1B.c) has been used. Only those files are compiled.

## Tasks:page_with_curl:

**0. make -f 0-Makefile**
- [0-Makefile](./0-Makefile): First makefile that requires:
  - name of executable: `school`
  - rules: `all`
    - The all `rule` builds the executable
  - variables: `none`

**1. make -f 1-Makefile**
- [1-Makefile](./1-Makefile) Requires:
  - name of executable: `school`
  - rules: `all`
    - The `all` rule builds the executable
  - variables: `CC`, `SRC`
    - `CC`: the compiler used
    - `SRC`: the `.c` files

**2. make -f 2-Makefile**
- [2-Makefile](./2-Makefile): First useful Makefile that requires:
  - name of executable: `school`
  - rules: `all`
  - The all rule builds executable
  - variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
  - The `all` rule recompiles only the updated source files
  - It is not allowed to have a list of all the `.o` files

**3. make -f 3-Makefile**
- [3-Makefile](./3-Makefile): Requires:
  - name of executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds the executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
  - The `all` rule recompiles only the updated source files
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail
  - it not allowed to have a list of all the `.o` files

**4. A complete Makefile**
- [4-Makefile](./4-Makefile): Requires:
  - name of executable: `school`
  - rules: `all`, `clean`, `fclean`, `oclean`, `re`
    - `all`: builds the executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule recompiles only the updated source files
  - The `clean`, `oclean`, `fclean`, `re` rules never fail
  :wq


