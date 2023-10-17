#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int suma=0;
    printf("Ingrese un numero entero \n");
    scanf("%d",&num);
    while (num>=1)
    {
        suma+=num%10;
        num=trunc(num/10);
    }
    printf("La suma de los digitos del numero es: %d",suma);
    return 0;
    
}
