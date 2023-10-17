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
        scanf("%d\n",&num);
        if (num%10==5)
        {
            acumulador+=num;
            contador+=1;
            
        }
        printf("Para finalizar el programa digite 0 \n");
        
    }
    promedio=acumulador/contador;
    return 0;
}
