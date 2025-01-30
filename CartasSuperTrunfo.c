#include <stdio.h>
int main(){
    int codigo;
    char cidade [20];
    int populacao;
    float area;
    int PIB;
    char pontos [20];

    printf("digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite populacao: \n");
    scanf("%d", &populacao);
    
    printf("digite area: \n");
    scanf("%f", &area);

    printf("digite PIB: \n");
    scanf("%d", &PIB);

    printf("digites pontos turisticos: \n");
    scanf("%s", &pontos);

    printf("cidade: %s - Populacao: %d \n", cidade, populacao);
    printf("área: %f - PIB: %d \n",area, PIB);
    printf("pontos: %s", pontos);

}

 