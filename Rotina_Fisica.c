#include<stdio.h>

int main(void){

    printf("Seja bem a academia sei lá, deseja uma saude melhor, um corpo escultural aqui é o lugar certo!!\n");

    int opcao;

    do {

        printf("então Sr(a), por favo me diga o deseja fazer?? escolha uma opção\n ");

        printf("1 ---cuida da saude ?? digite 1\n ");
          
        printf("2 ---um corpo escultural ?? digite 2\n ");   

        printf("3 ---Consultar dicas de treino ?? digite  3\n");

        printf("0 --- Sair\n");

        scanf("%d", &opcao );    

            switch(opcao) {
        case 1:
            printf("Você escolheu a opção 1, Cuida da saude otima escolha paara p sei futuro .\n");
            break;
        case 2:
            printf("Você escolheu 2, decisão interresante mostra grande força de vontade e desejo de murda .\n");
            break;
        case 3:
            printf("Você escolheu 3!, algo simples e racional para seguir um pensamento, mas recomendo ir num estruto \n");
            break;
        case 0:
            printf("Você escolheu sair, espero que volte\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    } while (opcao != 0);

    printf ("Obrigado pela visita !\n");

    return 0;
    
}