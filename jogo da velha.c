#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tabuleiro(char casas2[9]){
    printf("\t  %c  | %c  | %c  \n", casas2[0], casas2[1], casas2[2]);
    printf("\t-----------------\n");
    printf("\t  %c  | %c  | %c  \n", casas2[3], casas2[4], casas2[5]);
    printf("\t-----------------\n");
    printf("\t  %c  | %c  | %c  \n", casas2[6], casas2[7], casas2[8]);
}

int main(){
    char casas[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char res;
    int cont_jogadas, jogada = 1, vez = 0,i;
    int j1 = 0, j2 = 0, emp = 0;
    int opc;
    do{
        tabuleiro(casas);
        printf("Digite 1 para jogar com um amigo\n");
        printf("Digite 2 para jogar contra CPU\n");
        scanf("%i", &opc);
    }while(opc < 1 || opc > 2);
    do{
            cont_jogadas = 1;
            for(i=0;i<=8;i++){
                casas[i] = ' ';
            }
        
        do{
            tabuleiro(casas);
            if(jogada==0){
                printf("Jogada invalida, tente novamente\n");
            }
            printf("Digite uma casa para marcar[1-9]\n");
            if(vez%2==0){
                printf("Jogador X:  ");
                scanf("%i", &jogada);
            }else{
                if(opc == 1){
                    printf("Jogador O:  ");
                    scanf("%i", &jogada);
                }else{
                    if(casas[0]=='O' && casas[1]=='O' && casas[2]==' '){jogada = 3;}
                    else if(casas[3]=='O' && casas[1]=='O' && casas[2]==' '){jogada = 6;}
                    else if(casas[6]=='O' && casas[7]=='O' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='O' && casas[1]==' ' && casas[2]=='O'){jogada = 2;}
                    else if(casas[3]=='O' && casas[4]==' ' && casas[5]=='O'){jogada = 5;}
                    else if(casas[6]=='O' && casas[7]==' ' && casas[8]=='O'){jogada = 8;}
                    else if(casas[0]==' ' && casas[1]=='O' && casas[2]=='O'){jogada = 1;}
                    else if(casas[3]==' ' && casas[4]=='O' && casas[5]=='O'){jogada = 4;}
                    else if(casas[6]==' ' && casas[7]=='O' && casas[8]=='O'){jogada = 7;}
                    else if(casas[0]=='O' && casas[3]=='O' && casas[6]==' '){jogada = 7;}
                    else if(casas[1]=='O' && casas[4]=='O' && casas[7]==' '){jogada = 8;}
                    else if(casas[2]=='O' && casas[5]=='O' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='O' && casas[3]==' ' && casas[6]=='O'){jogada = 4;}
                    else if(casas[1]=='O' && casas[4]==' ' && casas[7]=='O'){jogada = 5;}
                    else if(casas[2]=='O' && casas[5]==' ' && casas[8]=='O'){jogada = 6;}
                    else if(casas[0]==' ' && casas[3]=='O' && casas[6]=='O'){jogada = 1;}
                    else if(casas[1]==' ' && casas[4]=='O' && casas[7]=='O'){jogada = 2;}
                    else if(casas[2]==' ' && casas[5]=='O' && casas[8]=='O'){jogada = 3;}
                    else if(casas[0]=='O' && casas[4]=='O' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='O' && casas[4]=='O' && casas[8]=='O'){jogada = 5;}
                    else if(casas[0]==' ' && casas[4]=='O' && casas[8]=='O'){jogada = 1;}
                    else if(casas[2]=='O' && casas[4]=='O' && casas[6]==' '){jogada = 7;}
                    else if(casas[2]=='O' && casas[4]==' ' && casas[6]=='O'){jogada = 5;}
                    else if(casas[2]==' ' && casas[4]=='O' && casas[6]=='O'){jogada = 3;}
                    
                    else if(casas[3]=='X' && casas[1]=='X' && casas[2]==' '){jogada = 6;}
                    else if(casas[6]=='X' && casas[7]=='X' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='X' && casas[1]==' ' && casas[2]=='X'){jogada = 2;}
                    else if(casas[3]=='X' && casas[4]==' ' && casas[5]=='X'){jogada = 5;}
                    else if(casas[6]=='X' && casas[7]==' ' && casas[8]=='X'){jogada = 8;}
                    else if(casas[0]==' ' && casas[1]=='X' && casas[2]=='X'){jogada = 1;}
                    else if(casas[3]==' ' && casas[4]=='X' && casas[5]=='X'){jogada = 4;}
                    else if(casas[6]==' ' && casas[7]=='X' && casas[8]=='X'){jogada = 7;}
                    else if(casas[0]=='X' && casas[3]=='X' && casas[6]==' '){jogada = 7;}
                    else if(casas[1]=='X' && casas[4]=='X' && casas[7]==' '){jogada = 8;}
                    else if(casas[2]=='X' && casas[5]=='X' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='X' && casas[3]==' ' && casas[6]=='X'){jogada = 4;}
                    else if(casas[1]=='X' && casas[4]==' ' && casas[7]=='O'){jogada = 5;}
                    else if(casas[2]=='X' && casas[5]==' ' && casas[8]=='X'){jogada = 6;}
                    else if(casas[0]==' ' && casas[3]=='X' && casas[6]=='X'){jogada = 1;}
                    else if(casas[1]==' ' && casas[4]=='X' && casas[7]=='X'){jogada = 2;}
                    else if(casas[2]==' ' && casas[5]=='X' && casas[8]=='X'){jogada = 3;}
                    else if(casas[0]=='X' && casas[4]=='X' && casas[8]==' '){jogada = 9;}
                    else if(casas[0]=='X' && casas[4]=='X' && casas[8]=='X'){jogada = 5;}
                    else if(casas[0]==' ' && casas[4]=='X' && casas[8]=='X'){jogada = 1;}
                    else if(casas[2]=='X' && casas[4]=='X' && casas[6]==' '){jogada = 7;}
                    else if(casas[2]=='X' && casas[4]==' ' && casas[6]=='X'){jogada = 5;}
                    else if(casas[2]==' ' && casas[4]=='X' && casas[6]=='X'){jogada = 3;}
                    else{
                        do{
                           srand((unsigned) time(NULL)); 
                           jogada = 1+ rand() % 9; 
                        }while(casas[jogada - 1] != ' ');
                    }
                }
            }
            if(jogada < 1 || jogada > 9){
                jogada = 0;
            }else if(casas[jogada - 1]  != ' '){
                jogada = 0;
            }else{
                if(vez%2==0){
                    casas[jogada - 1] = 'X';
                }else{
                    casas[jogada - 1] = 'O';
                }
                cont_jogadas++;
                vez++;
            }
            if(casas[0]=='X' && casas[1]=='X' && casas[2]=='X'){cont_jogadas = 11;}
            if(casas[3]=='X' && casas[4]=='X' && casas[5]=='X'){cont_jogadas = 11;}
            if(casas[6]=='X' && casas[7]=='X' && casas[8]=='X'){cont_jogadas = 11;}
            if(casas[0]=='X' && casas[3]=='X' && casas[6]=='X'){cont_jogadas = 11;}
            if(casas[1]=='X' && casas[4]=='X' && casas[7]=='X'){cont_jogadas = 11;}
            if(casas[2]=='X' && casas[5]=='X' && casas[8]=='X'){cont_jogadas = 11;}
            if(casas[0]=='X' && casas[4]=='X' && casas[8]=='X'){cont_jogadas = 11;}
            if(casas[2]=='X' && casas[4]=='X' && casas[6]=='X'){cont_jogadas = 11;}
            
            if(casas[0]=='O' && casas[1]=='O' && casas[2]=='O'){cont_jogadas = 12;}
            if(casas[3]=='O' && casas[4]=='O' && casas[5]=='O'){cont_jogadas = 12;}
            if(casas[6]=='O' && casas[7]=='O' && casas[8]=='O'){cont_jogadas = 12;}
            if(casas[0]=='O' && casas[3]=='O' && casas[6]=='O'){cont_jogadas = 12;}
            if(casas[1]=='O' && casas[4]=='O' && casas[7]=='O'){cont_jogadas = 12;}
            if(casas[2]=='O' && casas[5]=='O' && casas[8]=='O'){cont_jogadas = 12;}
            if(casas[0]=='O' && casas[4]=='O' && casas[8]=='O'){cont_jogadas = 12;}
            if(casas[2]=='O' && casas[4]=='O' && casas[6]=='O'){cont_jogadas = 12;}
        }while(cont_jogadas <= 9);
        tabuleiro(casas);
        if(cont_jogadas==10){
            printf("Jogo empatada\n");
            emp++;
        }if(cont_jogadas==11){
            printf("Vencedor X\n");
            j1++;
        }if(cont_jogadas==12){
            printf("Vencedor O\n");
            j2++;
        }
        printf("pontos jogador X: %i\n",j1);
        printf("pontos jogador O: %i\n",j2);
        printf("Empate :          %i\n",emp);
        printf("Deseja jogar novamente?[S-N]\n");
        scanf("%s", &res);
    }while(res =='s');
    return 0;
}
