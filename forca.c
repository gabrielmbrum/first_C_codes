#include <stdio.h>
#include <string.h> 

#define n 100

int main () 
{
    char resp[n], aux, chute[n], base[n];
    int qtd_chute = 0,ver=0,qtd_char=0, erro=0, id=0, op;

    //strcpy (resp, "");
    sprintf (resp, "lula"); //insira a resposta 

    printf("\n\t\tBEM VINDO AO JOGO DA FORCA\n");

    printf("____\n|  |\n|  \n| \n| \n|");

    qtd_char = strlen(resp);
    
    for (int i=0;i<=qtd_char;i++)
        base[i] = ' ';

    for (int i=0;i<qtd_char;i++)
    {
        printf("_");
        if (i == qtd_char-1)    printf("\n");
    }

    printf("\nA palavra contem %d caracteres!\n", qtd_char);
    do
    {
        ver = 0;

        do
        {
            printf("\n\nDigite qual acao ira realizar:\n\t1. Chutar letra\n\t2. Chutar resposta (voce so tem uma chance!!)\n\nAcao: ");
            scanf(" %d", &op);
        } while (op < 1 && op > 2);

        switch(op)
        {
        case 1:
            printf("\nQual letra deseja conferir?\n");
            scanf(" %c", &aux);
            for (int i=0;resp[i] != '\0';i++)
            {
                if (aux == resp[i]) {
                    base[i] = aux;
                } else if (i < qtd_char && (int)base[i]==32) {
                        base[i] = '_';
                    }

                if (resp[i] == base[i])
                    ver++;
            }
            break;

        case 2:
            printf("\nQual palavra voce acha que eh a resposta?\n");
            scanf(" %s", &chute);
            for (int i=0;i<qtd_char;i++)
            {
                if (chute[i] == resp[i])
                    ver++;

                if (i == qtd_char-1)
                {
                    if (ver == qtd_char)
                        strcpy(base, chute);
                    else {
                        qtd_chute = 1;
                        erro = 100;
                    }
                }
            }
            break;
        }

        if (ver == id)
            erro++;

        base[qtd_char] = '\0';

        switch(erro)
        {
            case 0: 
                printf("\n____\n|  |\n|  \n| \n| \n|");
                printf("%s",base); break;
            
            case 1: 
                printf("\n____\n|  |\n|  o\n|\n| \n|");
                printf("%s", base); break;

            case 2:
                printf("\n____\n|  |\n|  o\n| /\n| \n|");
                printf("%s", base); break;

            case 3:
                printf("\n____\n|  |\n|  o\n| /|\n| \n|");
                printf("%s", base); break;
            
            case 4:
                printf("\n____\n|  |\n|  o\n| /|\\\n| \n|");
                printf("%s", base); break;

            case 5:
                printf("\n____\n|  |\n|  o\n| /|\\\n| /\n|");
                printf("%s", base); break;

            case 6:
                printf("\n____\n|  |\n|  o\n| /|\\\n| / \\\n|");
                printf("%s", base); break;

            default:
                printf("\n____\n|  |\n|  o\n| /|\\\n| / \\\n|");
                printf("%s", resp); break;
        }
        
        id = ver;

    } while (erro < 6 && ver != qtd_char && qtd_chute == 0) ;

    if (ver == qtd_char)    
        printf("\n\n\t\tPARABENS!! VOCE ACERTOU A PALAVRA!\n");

    else printf("\n\n\t\tInfelizmente suas tentativas acabaram!! :(\n\t\tA reposta era: %s", resp);

}
