#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int num1;
    int num2;
    printf("Ingrese un numero entero de dos digitos \n");
    scanf("%d",&num);
    if (num>0 && num<=99)
    {

        num1=num%10;
        num2=trunc(num/10);
        if (num1>num2)
        {
            printf("Los enteros entre %d y %d son: \n",num2,num1);
            while (num2<num1-1)
            {
                num2+=1;
                printf(" %d ",num2);
                
            }
            
        }if (num2>num1)
        {
            printf("Los enteros entre %d y %d son: \n",num2,num1);
            while (num1<num2-1)
            {
                num2-=1;
                printf(" %d ",num2);
                
            }
        }
        
    }else{
        printf("El ejercicio no se puede realizar");
    }
    
    return 0;
}
