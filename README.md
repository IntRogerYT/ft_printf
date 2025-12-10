*Este proyecto ha sido creado como parte del currículo de 42 por rcamps-v.*

## **Descripción**
Este proyecto se basa en replicar la funcion *printf* en lenguaje C. La funcion *printf* se usa para mostrar texto en la consola.
Tambien puedes imprimir variables, siempre indicando el tipo de elemento a imprimir (character, string, integer...) y pasando como argumento, la variable cuyo valor queremos mostrar.

## **Instrucciones**
Para ejecutar el proyecto sigue los siguientes pasos.
### **1. Compilar la libreria (libft)**
Para empezar hay que compilar la libreria de funciones, para hacer-lo ejecutamos los siguientes comandos:
```bash
ft_printf
$ cd libft #Entramos en la libreria
$ make #Compilamos usando el Makefile
$ cd .. #Volvemos al directorio raíz
```
### **2. Compilar el proyecto principal**

Ahora ejecutamos `make` otra vez para compilar el proyecto principal:
```bash
ft_printf
$ make
```
### **3. Crear main y ejecucion del programa**
Ahora queda ejecutar el programa, para ello te recomiendo que crees una funcion main en un archivo a parte (por ejemplo *main.c*).

Ejemplo de funcion main para imprimir una variable tipo *string*:
```c
#include "ft_printf.h"

int	main(void)
{
	char	*text = "Texto mostrado con mi printf";

	ft_printf("%s\n", text);
	return (0);
}
```
Seguidamente compilamos el programa con el archivo main.c creado:
```bash
$ cc libftprintf.a main.c -o run
```
Y para terminar, ejecutamos el programa:
```bash
$ ./run
```
Salida del ejemplo:
```bash
Texto mostrado con mi printf
```

## **Recursos**
[Informacion sobre la funcion printf](https://www.ibm.com/docs/es/i/7.5.0?topic=functions-printf-print-formatted-characters)

[info sobre 42Barcelona](https://www.42barcelona.com/es/)
