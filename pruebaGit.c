
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
        printf("\n primer dia de la semana");
        break;
    case 2:
        printf("\n %i representa Martes", dia);
        printf("\n segundo dia de la semana");
        break;
          case 3:
        printf("\n %i representa Miercoles", dia);
        printf("\n tercer dia de la semana");
        break;
          case 4:
        printf("\n %i representa jueves", dia);
        printf("\n cuarto dia de la semana");
        break;
          case 5:
        printf("\n %i representa viernes", dia);
        printf("\n antepenultimo dia de la semana");
        break;
          case 6:
        printf("\n %i representa sabado", dia);
        printf("\n penultimo dia de la semana");
        break;
          case 7:
        printf("\n %i representa domingo", dia);
        printf("\n ultimo dia de la semana");
        break;
        /* si se digita un numero diferente del 1 al 7 imprimira que el numero no es valido*/
          default:
            printf(" \n su numero no es valido ");
            break;
    }
    return 0;
}
