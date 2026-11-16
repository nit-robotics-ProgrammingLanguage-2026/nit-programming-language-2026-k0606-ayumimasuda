#include <stdio.h>

int main(void)
{
    double ylimit;
    double g = 3.71;
    double y;
    double v;
    double t;

    scanf("%lf", &ylimit);

    if (ylimit < 0)
    {
        printf("NG\n");
        return 0;
    }

    if (ylimit == 0)
    {
        printf("0.000\n");
        return 0;
    }

    for (t = 0.0;; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2.0;

        if (y >= ylimit)
        {
            printf("%.3f\n", v);
            break;
        }
    }

    return 0;
}