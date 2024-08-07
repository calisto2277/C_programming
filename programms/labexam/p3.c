#include <stdio.h>
int main()
{
    double u[4] = {0, 0.5, 1, 1.5};
    double v[4] = {1.2, 1.4, 1.6, 1.8};
    double p[4];
    for (int i = 0; i < 4; i++)
    {
        p[i] = (1.0 / (double)u[i]) + (1.0 / (double)v[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%lf is the value of power:\n", p[i]);
    }

    double min = p[0];
    for (int i = 0; i < 4; i++)
    {
        if (min > p[i])
        {
            min = p[i];
        }
    }

    printf("minimun value of power is %lf.\n", min);
    return 0;
}
