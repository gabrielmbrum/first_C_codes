#include <stdio.h>

int main () {
    int x;
    
    printf("\nQual numero voce deseja ver a tabuada?\nR: ");
    scanf(" %d", &x);

    for (int i=0;i<=10;i++)
        printf("\n%d x %d = %d", x, i, x*i);

}