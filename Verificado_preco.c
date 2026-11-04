#include<stdio.h>

int main(void) {
    char produto[50];
    double atual;
    double antigo;
    int contador = 0;

    printf("Welcome, deseja verificao preço de algum produto ?? Right late go!!");

    do {
        printf("\nName produto: ");
        scanf("%49s", produto);  

        printf("preço do produto atual ");
        scanf("%lf", &atual);

        printf("valor do produto no mes anterior, please?");
        scanf("%lf",&antigo);

            if (atual>antigo){
                printf("houve um aumento no preço !!\n");
            } 
            else if (atual<antigo){
                printf("houve uma diminuição no valores !!\n");
            }
            else {
                printf(" O valor ser manteve igual !!\n");
            }

            contador++;

    } while (contador <3);

    return 0;
}