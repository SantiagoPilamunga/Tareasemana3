#include <stdio.h>
int main()
{
    int num;
    int acumulador=0;
    int contador=0;
    scanf("%d",&num);
    while (num!=0)
    {
        if (num%5==0)
        {
            acumulador+=num;
            contador+=1;
            
        }
        
        
    }
    
    return 0;
}
