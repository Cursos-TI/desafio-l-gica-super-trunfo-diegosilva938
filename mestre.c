#include <stdio.h>

int main() {
    char estado1[10];
    char codigo1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2[10];
    char codigo2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    float densidade_populacional1;
    float PIB_per_capita1;

    float densidade_populacional2;
    float PIB_per_capita2;

    int resultado1, resultado2;
    int atributo1, atributo2;
    int ataque1, ataque2,defesa1, defesa2,recuo1, recuo2;






    // Variáveis
    printf("Bem-vindo ao Super Trunfo! \n");

    printf("Carta 1\n");
    printf("Digite o Estado:\n");
    scanf("%s", estado1);
    printf("Digite o código:\n");
    scanf("%s", codigo1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    // Coletando dados da carta 1
    printf("Carta 2\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);
    printf("Digite o código:\n");
    scanf("%s", codigo2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf( "Digite a área: \n");
    scanf("%f", &area2);
    printf( "Digite o PIB: \n");
    scanf( "%f", &pib2);
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Coletando dados da carta 2
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    ///////////////////////////////
ataque1 = pib1+pontosturisticos1;
ataque2 = pib2+pontosturisticos2;
defesa1 = area1+populacao1;
defesa2 = area2+populacao2;
recuo1 = densidade_populacional1;
recuo2 = densidade_populacional2;

    // Escolhendo o atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. ataque\n");
    printf("2. defesa \n");
    printf("3. recuo\n");
    printf("escolha a comparacao\n");
    scanf("%d", &atributo1);


    switch (atributo1)
    {
        case 1:
            resultado1 = ataque1>ataque2?1:0;
            printf("Atributo escolhido: ataque\n");
            if (ataque1 > ataque2) {
                printf("Carta 1 venceu no ataque!\n");
            } else if (ataque1 < ataque2) {
                printf("Carta 2 venceu no ataque!\n");
            } else {
                printf("Empate no ataque!\n");
            }
            break;

        case 2:
            resultado1=defesa1>defesa2?1:0;
            printf("Atributo escolhido: defesa\n");
            if (defesa1 > defesa2) {
                printf("Carta 1 venceu na defesa!\n");
            } else if (defesa1 < defesa2) {
                printf("Carta 2 venceu na defesa!\n");
            } else {
                printf("Empate na defesa!\n");
            }
            break;

            case 3:
            resultado1=recuo1>recuo2?1:0;
            printf("Atributo escolhido: recuo\n");
            if (recuo1 < recuo2) {
                printf("Carta 1 venceu no recuo!\n");
            } else if (recuo1 > recuo2) {
                printf("Carta 2 venceu no recuo!\n");
            } else {
                printf("Empate no recuo!\n");
            }
            break;
            default:
            printf("Opção inválida!\n");
            


    }


    printf("\nEscolha o segundo atributo:\n");
    printf("1. atauqe\n");
    printf("2. defesa\n");
    printf("3. recuo\n");
    printf("escolha a comparacao\n");
    scanf("%d", &atributo2);
    // Escolhendo o segundo atributo

    if(atributo1  == atributo2)
    {
        printf("mesmo atributo escolhido\n");
        } else{
            switch (atributo2)
            {
                case 1:
                    resultado2 = ataque1>ataque2?1:0;
                    printf("Atributo escolhido: ataque\n");
                    if (ataque1 > ataque2) {
                        printf("Carta 1 venceu no ataque!\n");
                    } else if (ataque1 < ataque2) {
                        printf("Carta 2 venceu no ataque!\n");
                    } else {
                        printf("Empate no ataque!\n");
                    }
                    break;

                case 2:
                    resultado2=defesa1>defesa2?1:0;
                    printf("Atributo escolhido: defesa\n");
                    if (defesa1 > defesa2) {
                        printf("Carta 1 venceu na defesa!\n");
                    } else if (defesa1 < defesa2) {
                        printf("Carta 2 venceu na defesa!\n");
                    } else {
                        printf("Empate na defesa!\n");
                    }
                    break;
                    case 3:
                    resultado2=recuo1>recuo2?1:0;
                    printf("Atributo escolhido: recuo\n");  
                    if ( recuo1 < recuo2) {
                        printf("Carta 1 venceu no recuo!\n");
                    } else if (recuo1 > recuo2) {
                        printf("Carta 2 venceu no recuo!\n");
                    } else {
                        printf("Empate no recuo!\n");
                    }
                    break;
                    default:
                    printf("Opção inválida!\n");    
                    
            }
        }
        if(resultado1&&resultado2)
            {
             printf("voce venceu!\n");
            }else if(resultado1 != resultado2){
            printf("empatou!\n");
            }else{
                printf("voce perdeu!\n");
            }


            return 0;



            }

   
   
   
 