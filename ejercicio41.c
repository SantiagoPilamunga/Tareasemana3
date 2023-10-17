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
    
    return 0;
}
