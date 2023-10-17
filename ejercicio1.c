#include <stdio.h>
int main()
{
    int num;
    int i;
    printf("Ingrese un numero entero");
    scanf("%d",&num);
    printf("Los enteros entre 1 y %d son: ",num);
    for ( i = 1; i < num; i++)
    {
        printf(" %d ",i);
    }
    
    return 0;
}
