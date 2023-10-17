#include <stdio.h>
int main()
{
    int num1=0;
    int num2=1;
    int suma=0;
    int sumatotal=0;
    while (suma<=100)
    {
        suma=num1+num2;
        num1=num2;
        num2=suma;
        if (num2<100)
        {
            sumatotal+=suma;
        }
    }
    sumatotal+=1; /* se suma el 1 porque se repite dos veces 1 y en sumatotal solo esta una vez*/
    printf("El numero resultante de sumar la serie de numeros de fibonacci de 0 a 100 es: %d ",sumatotal);
    return 0;
}
