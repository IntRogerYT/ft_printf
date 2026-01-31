*This project has been created as part of the 42 curriculum by [rcamps-v]().*
# 📟 **Ft_printf**
## 📍 **Table of contents**
- [Description](#Description)
- [Instructions](#Instructions)
- [Technical decisions](#Technical-decisions)
- [Resources](#Resources)
## 🔍 **Description**
This project is based on replicating the *printf* function in C language. The *printf* function is used to display text on the console.
You can also print variables, always indicating the type of element to be printed (character, string, integer, etc.) and passing the variable whose value you want to display as an argument. All specific information about the project is taken from the project subject.

## ▶️ **Instructions**
To execute the project, follow these steps.
### 📦 **1. Compile the library (libft)**
To begin with, we need to compile the function library. To do this, we execute the following commands:
```bash
/ft_printf
$ cd libft #Enter the library
$ make #We compile using the Makefile.
$ cd .. #We return to the project's root directory.
```
### ⚙️ **2. Compile the main project**

Now we run `make` again to compile the main project:
```bash
/ft_printf
$ make
```
### 🚀 **3. Create main and run the programme**
Now you need to run the program. To do this, I recommend that you create a main function in a separate file (for example, *main.c*).

Example of a main function to print a variable of type *string*:
```c
#include "ft_printf.h"

int	main(void)
{
	char	*text = "World";

	ft_printf("Hello %s!\n", text);
	printf("Hello %s!\n", text); //To compare my printf with the original
	return (0);
}
```
Next, we compile the programme with the main.c file we created:
```bash
$ cc libftprintf.a main.c -o run
```
And finally, we run the program:
```bash
$ ./run
```
Example output:
```bash
Hello World!
```

## 🧩 **Technical decisions**
This project has been developed based on how the original `printf` function works. However, there are cases in this project that are not controlled, including flags that are not permitted because they were not requested in the project statement.
### 🤖 **Use of AI**
In this project, the artificial intelligence has been used to:
- Explain how variadic functions (`stdarg.h`) work.
- Optimise the structure of the repository files.
- Generate unit tests for the different flags.
## 📌 **Resources**

- [Information about the printf function](https://www.ibm.com/docs/es/i/7.5.0?topic=functions-printf-print-formatted-characters)

- [info about 42Barcelona](https://www.42barcelona.com/es/)
