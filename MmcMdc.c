#include <stdio.h>
#include <math.h>

int main()
{
    int op, x, y, mmc = 0, mdc = 0;

    printf("\n\n\t\tBEM VINDO AO CALCULADOR DE MDC E MMC\n\n");

    do
    {
        printf("\nDigite o numero da acao que deseja realizar:\n");
        printf("\t1. Calcular o MMC\n\t2. Calcular o MDC\n");
        scanf(" %d", &op);
    } while (op < 1 || op > 2);

    switch (op)
    {
        case 1: //mmc
            printf("\nDigite quais numeros vao ser usados para calcular o MMC:\nNumero 1: ");
            scanf(" %d", &y);
            printf("\nNumero 2: "); scanf(" %d", &x);
            if (x != 0 && y != 0)
            {
            if (x >= y)
            {
                for (int i=sqrt(x*x);i<=x*y;i++)
                {
                    if (i % x == 0 && i % y == 0 && mmc == 0)
                        mmc = i;
                }
            }   else  {
                    for (int i=sqrt(y*y);i<=x*y;i++)
                    {
                        if (i % x == 0 && i % y == 0 && mmc == 0)
                            mmc = i;
                    }       
            }
            }
            printf("\nO MMC entre %d e %d eh %d", x, y, mmc);
            break;

        case 2: //mdc
            printf("\nDigite quais numeros vao ser usados para calcular o MMC:\nNumero 1: ");
            scanf(" %d", &y);
            printf("\nNumero 2: "); scanf(" %d", &x);
            if (x <= y)
            {
                for (int i=sqrt(x*x);i>0;i--)
                {
                    if (x % i == 0 && y % i == 0 && mdc == 0)
                        mdc = i;
                }
            }   else {
                for (int i=sqrt(y*y);i>0;i--)
                {
                    if (x % i == 0 && y % i == 0 && mdc == 0)
                        mdc = i;
                }
            }
            printf("\nO MDC entre %d e %d eh %d", x, y, mdc);

            break;
    }
}