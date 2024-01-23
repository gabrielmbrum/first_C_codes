#include <stdio.h>

#define m 3

int main()
{
    int ver=0, co, li, l_a, l_b, c_a, c_b, dp_a, dp_b, ds_a, ds_b, cont=0, tab[m][m] = {{32,32,32},{32,32,32},{32,32,32}}; char res[m][m] = {};
    char pl;

    printf("\n----------BEM VINDO AO JOGO DA VELHA------------\n\n");
    printf("O jogador A ira jogar com: X\nO jogador B ira jogar com: O\n");
    //X: 88 e O:79 e space: 32
    do
    {
    do
    {
        printf("\n\nQuem ira fazer a jogada? Digite A ou B: ");
        scanf(" %c", &pl);        
    } while (pl != 'A' && pl != 'B');
    cont++;

    if (cont == 1)
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
            {
                res[i][j] = (char)tab[i][j];
                if (j == 0)
                    printf("  %c", res[i][j]);
                
                else
                    printf("   |   %c", res[i][j]);

            }
            if (i == 0 || i == 1)
            printf("\n----------------------\n");
            
        }
    }

    do
    {
        do
        {
            printf("\nQual posicao ira jogar?\nLinha: ");
            scanf(" %d", &li);
        } while (li < 1 || li > m);

        do
        {
            printf("\nColuna: ");
            scanf(" %d", &co);
        } while (co < 1 || co > m);

        if (tab[li-1][co-1] != 32)
        {
            ver = 1;
            printf("\nJa jogaram nessa posicao!!!\n");
        }

        else 
            ver = 0;

    } while (ver != 0);


    switch (pl)
    {
        case 'A':
            tab[li-1][co-1] = 88;
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<m;j++)
                {
                    res[i][j] = (char)tab[i][j];
                }      
            }
            printf("\n------JOGO ATUAL------\n\n");
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<m;j++)
                {
                    if (j == 0)
                        printf("  %c", res[i][j]);
                    
                    else
                        printf("   |   %c", res[i][j]);
                }
              
                if (i == 0 || i == 1)
                    printf("\n----------------------\n");
            }
            break;

        case 'B':
            tab[li-1][co-1] = 79;
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<m;j++)
                {
                    res[i][j] = (char)tab[i][j];
                }      
            }
            printf("\n------JOGO ATUAL------\n\n");
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<m;j++)
                {
                    if (j == 0)
                        printf("  %c", res[i][j]);
                    
                    else
                        printf("   |   %c", res[i][j]);
                }
                if (i == 0 || i == 1)
                    printf("\n----------------------\n");
            }
            break;       
    }

    //verificacao linha
    for (int i=0;i<m;i++)
    {
        l_a = 0;
        l_b = 0;
        for (int j=0;j<m;j++)
        {

            if (tab[i][j] == 88)
                l_a++;
            
            if (tab[i][j] == 79)
                l_b++;
        }

        if (l_a == 3)
        {
            printf("\n\nO jogador A venceu!!!\n");
            return 0;
        }
        if (l_b == 3)
        {
            printf("\n\nO jogador B venceu!!!\n");
            return 0;
        }
                        
    }

    //verificacao coluna
    for (int i=0;i<m;i++)
    {
        c_a=0;c_b=0;
        for (int j=0;j<m;j++)
        {
            if (tab[j][i] == 88)
                c_a++;
            
            if (tab[j][i] == 79)
                c_b++;
        }
        
        if (c_a == 3)
        {
            printf("\n\nO jogador A venceu!!!\n");
            return 0;
        }
        if (c_b == 3)
        {
            printf("\n\nO jogador B venceu!!!\n");
            return 0;
        }

    }

    //verificacao diagonal principal
    dp_a=0;dp_b=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (j == i)
            {
                if (tab[i][j] == 88)
                    dp_a++;

                if (tab[i][j] == 79)
                    dp_b++;
            }
        }
    }

    if (dp_a == 3)
    {
        printf("\n\nO jogador A venceu!!!\n");
        return 0;
    }
    if (dp_b == 3)
    {
        printf("\n\nO jogador B venceu!!!\n");
        return 0;
    }

    //verificacao diagonal secundaria
    ds_a=0;ds_b=0;
    for (int i=0;i<m;i++)
    {
        int j = 2;
        if (tab[i][j-i] == 88)
            ds_a++;

        if (tab[i][j-i] == 79)
            ds_b++;
    }

    if (ds_a == 3)
    {
        printf("\n\nO jogador A venceu!!!\n");
        return 0;
    }
    if (ds_b == 3)
    {
        printf("\n\nO jogador B venceu!!!\n");
        return 0;
    }

    if (cont == m*m)
        printf("\n\nDEU VELHA!!!!\n");

    } while (cont < m*m);

}