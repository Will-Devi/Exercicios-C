#include<stdio.h>

int main (void) {

    float preco [10];
    float ordenacao;
    int opcao;
    
    printf ("Seja bem o sistema de cadatros de produtos\n");

    //for inicial para recebe os valres e verificar ser são valores aceitaveis 
     for (int i = 0; i < 10; i++) {
    printf("Informe o valor do produto:\n");

        if (scanf("%f", &preco[i]) != 1) {
            printf("Entrada invalida! Informe um numero.\n");
         return 1;
         }
         if (preco <= 0) { 
            printf ("ERROR !! o preço deve ser maoir que zeor.\n");
         }
    }

        printf ("Como deseja organizar os produtos informados, em ordem crecente ou decrecente dos valores ??\n");

        printf(" opção 1 : crecente \n opção 2: decrecente");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            printf("opção crecente\n");
            break;

            case 2: 
            printf("opção decrecente\n");
            break;

            default :
            printf("Opcao invalida.\n");
            break;
        }

       
 if (opcao == 1 || opcao == 2 ){
        // for secundario para anda pelo arry durante a orndenação
        for (int i = 0; i< 9; i++){

            // for de orndenação, pegar os valores do arry e conpara para ver qual é o maoir 
            for ( int j = 0; j < 9 - i ; j++){

                    /*if(preco[j], opcao, preco[j + 1]){
                        ordenacao = preco [j];
                        preco[j] = preco[j + 1];
                     
                        preco[j + 1 ] = ordenacao;*/
                     if ((opcao == 1 && preco[j] > preco[j + 1]) ||
                         (opcao == 2 && preco[j] < preco[j + 1])){
                        ordenacao = preco [j];
                        preco[j] = preco[j + 1];
                     
                        preco[j + 1 ] = ordenacao;

                         } 
            }
         }
                
           
        
            // 3. LAÇO PARA EXIBIR O RESULTADO
    printf("\nOs valores dos produtos ordenados sao:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Produto %d: R$%.2f\n", i + 1, preco[i]);
}

} else {

    printf("\nERROR\n");
}
    return 0;
}