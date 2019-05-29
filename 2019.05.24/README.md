# Lenguaje C - 101

En esta clase se hizo una revision muy rapida de un programa sencillo en C que imprime el mensaje `hola mundo`. 
Después se mostró la forma como se genera una libreria de enlace estático y como la funcionalidad implementada en esta es invocada desde un programa en C.

Se desarrollaron los 3 programas

* [basico.c](basico.c)
* [libfun.c](libfun.c)
* [libfun.h](libfun.h)

Para compilar el programa se llevan a cabo los siguientes pasos:

 * Generar la libreria
 
 ```
 gcc -c libfun.c -o libfun.c
 ar rcs libfun.a libfun.o 
 ```
 
 * En el paso anterior se generó el archivo `libfun.a`. Ahora enlazaremos el programa `basico.c` con la libreria `libfun.a`.
 
 ```
 gcc basico.c -L. lfun -o basico 
 ``` 
* Finalmente, el programa se ejecuta:

 ```
 ./basico
 ``` 
