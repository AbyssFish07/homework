#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    double pi = 1, a = 2, b = 1;
    while (fabs(a / b - 1.0) >= 1e-7)
    {
        pi *= a / b;
        if (i % 2)
        {
            a += 2;   
        }
        else
        {
            b += 2;  
        }
        i++;
    }
    pi *= 2;
    printf("%.7f", pi);
    return 0;
}


