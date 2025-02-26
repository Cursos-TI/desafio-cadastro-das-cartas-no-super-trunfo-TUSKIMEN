#include <stdio.h>
int main(){
    char pais;
    char estado;
    char codigo[5];
    char cidade [10];
    int populacao;
    float area;
    int PIB;
    int pontos;

    printf("digite o estado: \n");
    scanf("%s",&estado);

    printf("digite o codigo: \n");
    scanf("%s", &codigo);

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

 