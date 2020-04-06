#include <stdio.h>
#include <stdlib.h>

//Declaracion o prototipo
int saludar(int);

int main()
{
    //llamada o invocacion

    int valor;

    valor = saludar(4);

    printf("El numero ingresado es: %d\n", valor);


    return 0;
}

int saludar(int numero)
{

    int unEntero;

   printf("Hola a todos el numero es %d\n", numero);
   printf("Ingrese un numero: ");
   scanf("%d", &unEntero);

   return unEntero;
}
