#include <stdio.h>
int main(){
    char pais;
    char estado[5];
    char codigo[5];
    char cidade [10];
    int populacao;
    float area;
    int PIB;
    int pontos;
    

    printf("digite o estado: \n");
    scanf("%s", &estado);

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
    scanf("%d", &pontos);

    float densidade =(float) populacao/area; //variavel;
    float PIBpercapita =(float) PIB / populacao; //variavel

    printf("estado: %s \n",estado);
    printf("codigo: %s \n",codigo);
    printf("cidade: %s \n",cidade);
    printf("populacao: %d \n",populacao);
    printf("area: %.2f Km² \n",area);
    printf("PIB: %d milhões de reais \n",PIB);
    printf("pontos turisticos: %d \n",pontos);
    printf("desidade popolacional:%.2f hab/Km²\n",densidade);
    printf("PIB per Capita: %.2f reais \n", PIBpercapita);

    char estado2[5];
    char codigo2[5];
    char cidade2 [10];
    int populacao2;
    float area2;
    int PIB2;
    int pontos2;

    printf("digite o estado: \n");
    scanf("%s",&estado2);

    printf("digite o codigo: \n");
    scanf("%s", &codigo2);

    printf("digite sua cidade: \n");
    scanf("%s", &cidade2);

    printf("digite populacao: \n");
    scanf("%d", &populacao2);
    
    printf("digite area: \n");
    scanf("%f", &area2);

    printf("digite PIB: \n");
    scanf("%d", &PIB2);

    printf("digites pontos turisticos: \n");
    scanf("%d", &pontos2);

    float densidade2 =(float) populacao2/area2; //variavel
    float PIBpercapita2 =(float) PIB2 / populacao2; //variavel

    printf("estado: %s \n",estado2);
    printf("codigo: %s \n",codigo2);
    printf("cidade: %s \n",cidade2);
    printf("populacao: %d \n",populacao2);
    printf("area: %f Km² \n",area2);
    printf("PIB: %d milhões de reais \n",PIB2);
    printf("pontos turisticos: %d \n",pontos2);
    printf("desidade populacional:%.2f hab/Km²\n",densidade2);
    printf("PIB per Capita: %.2f reais \n", PIBpercapita2);


    
    
    return 0;


}


 