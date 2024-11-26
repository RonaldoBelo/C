#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int valAbs(int num)
{
    return num < 0 ? -num : num;
}

int main()
{
    int start, op, mode, n = 0, points = 0, totalPoints[15] = {0}, random, mosca[15] = {0}, streakMosca = 0, streakPuts = 0, ac[15][3]= {0};
    int id, max=0;
    char player[15][10];
    FILE* save;

    save = fopen("NM_save.txt", "r");

        while(fscanf(save, "%9[^,],%d,%d,%d,%d,%d\n", player[max], &totalPoints[max], &mosca[max], &ac[max][0], &ac[max][1], &ac[max][2]) == 6) { // Carrega informações do jogador
            max++;
        }
   

    fclose(save);
    

    srand(time(NULL));


    while(1){ //menu
        system("cls");

        puts("0) Criar novo Jogador\n");
        puts("Selecionar um Jogador:");


        for(int i=0; i<max; i++){
            printf(" %d) %s\n", i+1, player[i]);
        }

        scanf("%d", &start);
        getchar();

        if(start==0){ // criar novo jogador
            system("cls");
            if(max<15){
        
                puts("Digite o nome do Jogador:\n");
                id = max;
                max++;
                scanf(" %s", player[id]);


                break;

            }else{
                puts("Numero maximo de jogadores atingido.");
                system("pause");
            }

        }else if(start>0 && start<=max){ // Seleciona jogador existente
            id = start-1;

            break;
        }else{ // jogador nao cadastrado
            system("cls");
            puts("Jogador inexistente.\n");
            fflush(stdin);
            system("pause");
        }
    }

    while (1){ // jogo
        system("cls");
        puts("\t\t|  Na Mosca!  |\n");
        printf("Player: %s\n", player[id]);
        printf("Pontuacao Total: %d\n", totalPoints[id]);
        printf("Moscas: %d\n\n", mosca[id]);

        puts("1) Comecar Jogo");
        puts("2) Conquistas");
        puts("0) Encerrar programa");

        printf("\nDigite uma opcao: ");

        scanf("%d", &op);

        switch (op){

        case 1:

            system("cls");
            puts("1) Modo Facil");
            puts("2) Modo Mediano");
            puts("3) Modo Dificil");
            scanf("%d", &mode);

            switch(mode){
                
                case 1: // Modo Facil
                    while (1){
                        system("cls");
                        random = rand() % 6;

                        puts(" \e[1;30m<-- Digite um numero fora do intervalo para retornar\e[0m\n\n");
                        puts("    \e[1mAdivinhe o numero de 0-5\e[0m\n\n");
                        printf(" \tSeu numero: ");
                        scanf("%d", &n);

                        if (n<0 || n>5){
                            break;
                        }

                        points = fmax(3 - valAbs((random-n)), 0);
                        if(valAbs((random-n)) == 3 && points == 0){
                            points = 1;
                        }
                        totalPoints[id] += points;

                        if (points == 3){
                            printf("\n\t\e[33;4m Na Mosca! \e[0m\e[33m Voce acertou em cheio e fez 3 pontos.\e[0m");
                            mosca[id]++;
                            streakMosca++;
                            if(streakMosca==3){
                                ac[id][1]=1;
                            }
                        }else{
                            streakMosca=0;
                        }
                        if (points == 2){
                            printf("\n\t\e[1;36mPassou raspando! Voce fez 2 pontos.\e[0m");
                        }
                        if (points == 1){
                            printf("\n\t\e[1;32mBoa! Voce fez 1 ponto.\e[0m");
                        }
                        if (points == 0){
                            printf("\n\t\e[31mPuts... Voce fez 0 pontos.\e[0m");
                            streakPuts++;
                            if(streakPuts==3){
                                ac[id][2]=1;
                            }
                        }else{
                            streakPuts=0;
                        }

                        printf("\n\n\tO numero sorteado era \e[1;4m%d\e[0m\n\n\n\n", random);

                        system("pause");
                    }
                break;

                case 2: // Modo Mediano
                    while (1){
                        system("cls");
                        random = rand() % 11;

                        puts(" \e[1;30m<-- Digite um numero fora do intervalo para retornar\e[0m\n\n");
                        puts("    \e[1mAdivinhe o numero de 0-10\e[0m\n\n");
                        printf(" \tSeu numero: ");
                        scanf("%d", &n);

                        if (n<0 || n>10){
                            break;
                        }

                        points = (10 - valAbs((random-n)))/2;
                        totalPoints[id] += points;

                        if (points == 5){
                            printf("\n\t\e[33;4m Na Mosca! \e[0m\e[33m Voce acertou em cheio e fez 5 pontos.\e[0m");
                            mosca[id]++;
                            streakMosca++;
                            if(streakMosca==3){
                                ac[id][0]=1;
                            }
                        }else{
                            streakMosca=0;
                        }
                        if (points == 4){
                            printf("\n\t\e[1;36mMuito bom, passou raspando! Voce fez 4 pontos.\e[0m");
                        }
                        if (points == 3 || points == 2){
                            printf("\n\t\e[1;32mBoa! Voce fez %d pontos.\e[0m", points);
                        }
                        if (points == 1){
                            printf("\n\t\e[1;33mDa pra melhorar, ne? Voce fez 1 ponto.\e[0m");
                        }
                        if (points == 0){
                            printf("\n\t\e[31mPuts... Voce fez 0 pontos.\e[0m");
                            streakPuts++;
                            if(streakPuts==3){
                                ac[id][1]=1;
                            }
                        }else{
                            streakPuts=0;
                        }

                        printf("\n\n\tO numero sorteado era \e[1;4m%d\e[0m\n\n\n\n", random);

                        system("pause");
                    }

                break;

                case 3:

                break;

                default:
                    puts("Opcao invalida.");
                break;
            }

        break;

        case 2:
            system("cls");
            if(ac[id][0]==1){
                puts("\n\e[4;33mBala na agulha\e[0m\n\e[33m  Acerte A Mosca 3 vezes seguidas.\e[0m");
            }else{
                puts("\n\e[1;30mAcerte A Mosca 3 vezes seguidas.\e[0m");
            }
            if(mosca[id] > 10){
                puts("\n\e[33mAcerte A Mosca um total de 10 vezes.\e[0m");
            }else{
                puts("\n\e[1;30mAcerte A Mosca um total de 10 vezes.\e[0m");
            }
            if(mosca[id] > 30){
                puts("\n\e[33mAcerte A Mosca um total de 30 vezes.\e[0m");
            }else{
                puts("\n\e[1;30mAcerte A Mosca um total de 30 vezes.\e[0m");
            }
            if(ac[id][1]==1){
                puts("\n\e[1;4;35mQue sorte... ou nao\e[0m\n\e[1;35m  Faca 0 pontos 3 vezes seguidas.\e[0m");
            }else{
                puts("\n\e[1;30mFaca 0 pontos 3 vezes seguidas.\e[0m\n");
            }



            system("pause");
            break;

        case 0:
            system("cls");

            save = fopen("NM_save.txt", "w+");
            for(int i=0; i<max; i++){
                fprintf(save, "%s,%d,%d,%d,%d,%d\n", player[i], totalPoints[i], mosca[i], ac[i][0], ac[i][1], ac[i][2]);
            }
            fclose(save);

            puts("\nObrigado por jogar!");

            return 0;

        default:
            puts("\nOpcao invalida.");
            system("\npause");
            break;
        }

        system("cls");
    }
}