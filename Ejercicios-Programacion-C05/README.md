## Desarrollo de ejercicios de capitulo 5

1. Escribe un programa que llame a fork (). Antes de llamar a fork (), haga que el proceso principal acceda a una variable (por ejemplo, x) y establezca su valor en algo (por ejemplo, 100). ¿Qué valor tiene la variable en el proceso hijo? ¿Qué sucede con la variable cuando tanto el hijo como el padre cambian el valor de x?

[p1.c](p1.c)


2. Escriba un programa que abra un archivo (con la llamada al sistema open ()) y luego llame a fork () para crear un nuevo proceso. ¿Pueden el niño y el padre acceder al descriptor de archivo devuelto por open ()? ¿Qué sucede cuando se escriben en el archivo simultáneamente, es decir, al mismo tiempo?

[p2.c](p2.c)
