#include <stdio.h>
int main()
{
    int num=1;
    int acumulador=0;
    int contador=0;
    
    while (num!=0)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&num);
        if (num%10==5)
        {
            acumulador+=num;
            contador+=1;
            
        }
        
        
    }
    
    return 0;
}
