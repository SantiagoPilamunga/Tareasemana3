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
        printf("%d %d",num1,num2);

    }else{
        printf("El ejercicio no se puede realizar");
    }
    
    return 0;
}
