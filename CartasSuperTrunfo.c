    
   #include <stdio.h>
int main(){
    int codigo;
    char cidade [20];
    int população;
    float área;
    int PIB;
    char pontos [20];

    printf("digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite população: \n");
    scanf("%d", &população);
    
    printf("digite área: \n");
    scanf("%f", &área);

    printf("digite PIB: \n");
    scanf("%d", &PIB);

    printf("digites pontos turísticos: \n");
    scanf("%s", &pontos);

    printf("cidade: %s - População: %d \n", cidade, população);
    printf("área: %f - PIB: %d \n",área, PIB);
    printf("pontos: %s", pontos);

    return 0;

} 
