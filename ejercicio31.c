#include <stdio.h>
int main()
{
    int num=1;
    int acumulador=0;
    int contador=0;
    int promedio;
    
    while (num!=0)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&num);
        printf("Para finalizar el programa digite 0 \n");
        if (num%10==5)
        {
            acumulador+=num;
            contador+=1;
            
        }
    }
    promedio=acumulador/contador;
    printf("El promedio de los numeros terminados en 5 es: %d  \n",promedio);
    return 0;
}
