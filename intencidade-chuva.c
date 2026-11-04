#include<stdio.h>

int main (void){

   
    float chuvas[3][3];
    char cidade [50];
    double soma = 0;

    for (int i = 0 ; i <3; i++){
        printf("qual é o nome da cidade ??");
        scanf ("%s", cidade);

        for (int j = 0; j < 3; j++){

            printf("quantidade de chuva ??");
            scanf("%f", &chuvas[i][j]);

        
        soma = soma + chuvas[i][j];

        }

    }

    double media = soma/9;
      printf(" o resulta das chuvas são: %.2f \n", media);


return 0;

}