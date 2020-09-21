
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /* Declarar la variable dia que es la que podra en usuario*/
    int dia;
    printf(" Digite un numero del 1 al 7: ");
    scanf("%i", &dia);
    /*Usar switch para que el programa imprima en la pantalla el nombre del dia que representa ese numero */
    switch (dia)
    {
    case 1:
        printf("\n %i representa Lunes", dia);
        break;
    case 2:
        printf("\n %i representa Martes", dia);
        break;
          case 3:
        printf("\n %i representa Miercoles", dia);
        break;
          case 4:
        printf("\n %i representa jueves", dia);
        break;
          case 5:
        printf("\n %i representa viernes", dia);
        break;
          case 6:
        printf("\n %i representa sabado", dia);
        break;
          case 7:
        printf("\n %i representa domingo", dia);
        break;
        /* si se digita un numero diferente del 1 al 7 imprimira que el numero no es valido*/
          default:
            printf(" \n su numero no es valido ");
            break;
    }
    return 0;
}
