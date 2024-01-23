#include <stdio.h>
#include <math.h>
#include <stdlib.h> //contem a funcao abs (valor absoluto)
#include <time.h>

int main () {
    int resp, chute = 0, qtd_chutes = 0, nivel, tentativas;
    float pontos = 1000, pts_perdidos = 0;

    srand(time(NULL));
    
    puts("             BEM VINDO AO JOGO DE ADIVINHACAO NUMERICA                    ");
    puts("                                  ,'\\                                     ");
    puts("    _.----.        ____         ,'  _\\   ___    ___     ____              ");
    puts("_,-'       `.     |    |  /`.   \\,-'    |   \\  //   |   |    \\  |`.        ");
    puts("\\      __    \\    '-.  | /   `.  ___    |    \\//    |   '-.   \\ |  |       ");
    puts(" \\.    \\ \\   |  __  |  |/    ,','_  `.  |           | __  |    \\|  |       ");
    puts("   \\    \\//   /,' _`.|      ,' / / / /  |          ,' _`. |     |  |       ");
    puts("    \\     ,-'/  /   \\    ,'   | \\// /,`.|         /  /   \\   |     |       ");
    puts("     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  |  |\\    |       ");
    puts("      \\    \\ \\      /       `-.`.___,-' |  |\\  //| \\      /  | |   |       ");
    puts("       \\    \\ `.__,'|  |`-._    `       |__| \\// |  `.__,'|  | |   |       ");
    puts("        \\_.-'       |__|    `-._ |               '-.|     '-.| |   |       ");
    puts("                                `'                             '-._|       ");
    //define o numero secreto
    resp = rand () % 99 + 2;

    int acertou = (chute == resp);

    do {
        printf("\nQual nivel de dificuldade voce deseja jogar?\n\t(1) charmander\n\t(2) charmeleon\n\t(3) charizard\n\nEscolha: ");
        scanf(" %d", &nivel);
    } while (nivel < 1 || nivel > 3);

    switch (nivel) {
        case 1: tentativas = 15; 
            printf("\n        no nivel CHARMANDER voce tem %d tentativas!!                \n\n", tentativas);
            printf("                    _.--""`-..                                          \n");
            printf("                  ,'          `.                                        \n");
            printf("                ,'          __  `.                                      \n");
            printf("               /|          ' __   \\                                     \n");
            printf("              , |           // |.   .                                    \n");    
            printf("              |,'          !_.'|   |                                    \n");
            printf("            ,'             '   |   |                                    \n");
            printf("           /              |`--'|   |                                    \n");        
            printf("          |                `---'   |                                    \n");
            printf("           .   ,                   |                       ,'.          \n");
            printf("            ._     '           _'  |                    , ' \\ `         \n");
            printf("        `.. `.`-...___,...---''    |       __,.        ,`'   L,|        \n");    
            printf("        |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\       \n");
            printf("      -:..     `. `-..--_.,.<       `'      / `.        `-/ |   .       \n");
            printf("        `,         '''''     `.              ,'         |   |  ',,      \n");    
            printf("          `.      '            '            /          '    |'. |/      \n");
            printf("            `.   |              \\       _,-'           |       ''       \n");
            printf("              `._'               \\   ''\\                .      |        \n");
            printf("                 |                '     \\                `._  ,'        \n");
            printf("                 |                 '     \\                 .'|          \n");
            printf("                 |                 .      \\                | |          \n");
            printf("                 |                 |       L              ,' |          \n");
            printf("                 `                 |       |             /   '          \n");
            printf("                  \\                |       |           ,'   /           \n");
            printf("                ,' \\               |  _.._ ,-..___,..-'    ,'           \n");
            printf("               /     .             .      `!             ,j'            \n");
            printf("              /       `.          /        .           .'/              \n");
            printf("             .          `.       /         |        _.'.'               \n");
            printf("              `.          7`'---'          |------''_.'                 \n");
            printf("             _,.`,_     _'                ,''-----''                    \n");
            printf("         _,-_    '       `.     .'      ,\\                              \n");        
            printf("         -' /`.         _,'     | _  _  _.|                             \n");    
            printf("          ''--'---''''''        `' '! |! /                              \n");
            printf("                                  `' ' -'                               \n");
            printf("\n\n    Saiba que o numero secreto esta entre 0 e 100 !!                             ");    
            break;
        case 2: tentativas = 10;
            printf("\n        no nivel CHARMELEON voce tem %d tentativas!!                \n\n", tentativas); 
            printf("\n                            ,-'`\\	                       				");
            printf("\n                        _,''    /					                     ");
            printf("\n                 __....+       /               .	                     ");
            printf("\n             ,-''             /               ; `-._.'.				 ");
            printf("\n            /                (              ,'       .'                ");
            printf("\n           |            _.    \\            \\  ---._ `-.				 ");
            printf("\n           ,|    ,   _.'  Y    \\            `- ,'   \\  `.`.          ");
            printf("\n           l'    \\,'._,\\`.    .              /       ,--. l          ");
            printf("\n        .,-        `._  |  |    |              \\      _   l .         "); 
            printf("\n       /              `'--'    /              .'       ``. |  |        ");
            printf("\n      .\\   ,                 |                .        \\`. '         ");
            printf("\n      `.                .     |                '._  __   ;. \'         ");
            printf("\n        `-..--------...'       \\                 `'  `-''.  \\        ");
            printf("\n            `......___          `._                        |  \\       ");
            printf("\n                     /`            `..                     |   .       ");
            printf("\n                    /|                `-.                  |    L      ");
            printf("\n                   / |               \\  `._               .    |      ");
            printf("\n                 ,'  |,-'-.   .       .     `.            /     |      ");
            printf("\n               ,'    |     '   \\     |       `.         /      |      ");
            printf("\n             ,'     /|       \\ .     |         .       /       |      ");  
            printf("\n           ,'      / |        \\ .    +          \\   ,'       .'      ");
            printf("\n          .       .  |         \\|     \\         \\_,'        / j      ");
            printf("\n          |       |  L          `|      .          `        ,' '       ");
            printf("\n          |    _. |   \\         /      |           .     .' ,'        ");
            printf("\n          |   /  `|    \\       .       |  /        |   ,' .'          ");
            printf("\n          |   ,-..\\    -.     ,        | /         |,.' ,'        	 ");
            printf("\n          `. |___,`    /  `.   /`.       '          |  .'				 ");
            printf("\n            '-`-'     j     ` /.'7-..../|          ,`-' 			     ");		
            printf("\n                      |        .'  / _/_|          .	                 ");
            printf("\n                      `,       `''/''    \\         `.                 ");
            printf("\n                        `,       '.       `.         |                 ");
            printf("\n                   __,.-'         `.        \'       |				 ");
            printf("\n                  /_,-'\\         ,'        |        _.				 ");
            printf("\n                   |___.---.   ,-'        .-':,-'`\\,' .				 ");
            printf("\n                        L,.--''           '-' |  ,' `-.\\ 			 ");
            printf("\n\n          Saiba que o numero secreto esta entre 0 e 100 !!                             ");
            break;
        case 3: tentativas = 5;
        printf("\n                       no nivel CHARRIZARD voce tem %d tentativas !!                \n\n", tentativas);
        printf("\n                       .'    -,.__																");
        printf("\n                       `.     `.  ,																");    
        printf("\n                    .--'  .._,''    -' `.															");    
        printf("\n                   .    .'         `'																");    
        printf("\n                   `.   /          ,'	                                                            ");    
        printf("\n                     `  '--.   ,-'    '                                                           ");    
        printf("\n                      `'    `   |  \\                                                              ");    
        printf("\n                         -. \\, |                                                                  ");    
        printf("\n                          `--Y.'      ___.                                                        ");    
        printf("\n                               \\     L._, \\                                                       ");    
        printf("\n                     _.,        `.   <  <\\                _                                       ");    
        printf("\n                   ,' '           `, `.   | \\            ( `                                      ");    
        printf("\n                ../, `.            `  |    .\\`.           \\ \\_                                    ");    
        printf("\n               ,' ,..  .           _.,'    ||\\l            )  ''    .                             ");    
        printf("\n              , ,'   \\           ,'.-.`-._,'  |           .  _._`.                                ");    
        printf("\n            ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\                               ");    
        printf("\n          .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.                             ");    
        printf("\n          |  '          ..         `-...-'      |  `-'      / /        . `.                       ");    
        printf("\n          | /           |L__           |    |          / /          `. `.                         ");    
        printf("\n         , /            .   .          |    |         / /             ` `                         ");    
        printf("\n        / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\                        ");    
        printf("\n       / .           \'    `_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.                   ");    
        printf("\n      .  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\                      ");    
        printf("\n      ' /          `.'    l     .' /          \\..      ,_|/   `.  ,'\\     L`                      ");    
        printf("\n      |'      _.-'    '    ` `.    \\ _,'  `            \\ `.___`.''   `-.  , |            ");    
        printf("\n      ||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|                     ");    
        printf("\n      ||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||                     ");    
        printf("\n      || '              V      / /           `   | `   ,'   ,' '.    !  `. ||                     ");    
        printf("\n      ||/            _,-------7 '              . |  `-'    l         /    `||                     ");    
        printf("\n      . |          ,' .-   ,' ||               | .-.        `.      .'     ||                     ");    
        printf("\n       `'        ,'    `'    .'|               |    `.        '. -.'       `'                     ");    
        printf("\n                /      ,'      |               |,'    \\-.._,.'/'                                  ");    
        printf("\n                .     /        .               .       \\    .''                                   ");    
        printf("\n              .`.    |         `.             /         :_,'.'                                    ");    
        printf("\n                \\ `...\\   _     ,'-.        .'         /_.-'                                      ");    
        printf("\n                 `-.__ `,  `'   .  _.>----''.  _  __  /                                           ");    
        printf("\n                      .'        /'    '          |  '    '   '_                                   ");    
        printf("\n                     /_|.-'\\ ,'    .             '.'`__'-( \\                                      ");    
        printf("\n                       / ,'    ''    \\,'               `/  `-.|'                                  ");
        printf("\n\n              Saiba que o numero secreto esta entre 0 e 100 !!                             "); 
        break;
    }



    do {  
        printf("\n\nQual numero secreto voce pensa que eh ?\nR: ");
        scanf(" %d", &chute);
    
        qtd_chutes++;
        pts_perdidos += abs(chute - resp)/2;

        if (chute < 0) {
            printf("\nNao sao permitidos valores negativos!!\n");
            continue;
            qtd_chutes--;
        }
        acertou = (chute == resp);
        if (acertou) {
                puts(" _______   ________   _______   _______   _______   _______   _______     ");
            puts("|  ___  | |   __   | |  ___  | |  ___  | |    ___| |  ___  | |  _____|    ");
            puts("| |___| | |  |  |  | | |   |_| | |   |_| |   |_    | |___| | | |_____     ");
            puts("|  _____| |  |  |  | | |   __  | |   __  |    _|   |     __| |____   |    ");
            puts("| |	  |  |  |  | | |  |_ | | |  |_ | |   |___  |  |  \\    ____|  |    ");
            puts("| |       |  |__|  | | |____|| | |____|| |       | |  |\\  \\  |       |    ");
            puts("|_|       |________| |_______| |_______| |_______| |__| \\__\\ |_______|");
            printf("\n\t\tPARABENS!!! VOCE ACERTOU O NUMERO SECRETO!!\n");
            printf("\t\tForam necessarias %d tentativas!!", qtd_chutes);
            printf("\n\t\tPontos: %.2f pontos!!\n", pontos - pts_perdidos);
            continue;
        } else if (chute > resp) {
                printf("\nO numero secreto eh menor do que seu chute!!\n");
            } else {
                printf("\nO numero secreto eh maior do que seu chute!!\n");
            }

    } while (acertou == 0 && qtd_chutes < tentativas);

    if (acertou == 0)
        printf("\n\t\tInfelizmente suas tentativas acabaram!!\n\t\tO numero secreto era %d", resp);
}