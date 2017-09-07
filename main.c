#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    float resultado;
    float a, b;
    int opcion;

    do
    {
        system("cls");
        printf("\n----- Calculadora -----");
        printf("\n\n1 Ingrese primer operando (A=%.2f)\n", a);
        printf("\n2 Ingrese segundo operando (B=%.2f)\n", b);
        printf("\n3 Calcular la suma (A+B)\n");
        printf("\n4 Calcular la resta (A-B)\n");
        printf("\n5 Calcular multiplicacion (A*B)\n");
        printf("\n6 Calcular la division (A/B)\n");
        printf("\n7 Calcular el factorial (A!)\n");
        printf("\n8 Todas las operaciones\n");
        printf("\n9 Salir\n");
        printf("\n____________________________\n");
        printf("\n\nElegir una opcion= ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            scanf("%f",&a);
            break;

        case 2:
            scanf("%f",&b);
            break;

        case 3:
            resultado=suma(a, b);
            printf("\n El resultado es = %.2f\n", resultado);
            break;

        case 4:
            resultado=resta(a, b);
            printf("\n El resultado es = %.2f\n", resultado);
            break;

        case 5:
            resultado=multiplicar(a, b);
            printf("\n El resultado es = %.2f\n", resultado);
            break;

        case 6:
            resultado=dividir(a, b);
            printf("\n El resultado es = %.2f\n", resultado);
            break;

        case 7:
            resultado=factorial(a);
            if(resultado>0)
            {
                printf("\n El resultado es = %.2f\n", resultado);
            }

            else
            {
                printf("\nError, ingrese un numero positivo\n");
            }

        break;

    case 8:
        resultado=suma(a, b);
        printf("\n El resultado de la suma es = %.2f\n", resultado);
        resultado=resta(a, b);
        printf("\n El resultado de la resta es = %.2f\n", resultado);
        resultado=multiplicar(a, b);
        printf("\n El resultado de la multiplicacion es = %.2f\n", resultado);
        if(b==0)
        {
            printf("\nError no se puede dividir por 0");
        }
        else
        {
            resultado=dividir(a, b);
            printf("\n El resultado de la division es = %.2f\n", resultado);
        }
        resultado=factorial(a);
        printf("\n El resultado del factorial es = %.2f\n", resultado);
        break;

    case 9:
        break;

    }
    system("pause");
}
while(opcion !=9);
return 0;
}
