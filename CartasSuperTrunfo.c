#include <stdio.h>

    int main(){

        char estado1[50];
        char codigo1[50];
        char nome1[50];
        int populacao1;
        int turisticos1;
        float area1;
        float pib1;
        char estado2[50];
        char codigo2[50];
        char nome2[50];
        int populacao2;
        int turisticos2;
        float area2;
        float pib2;

        printf("Digite o estado da primeira carta: \n");
        scanf("%s", &estado1);

        printf("Digite seu codigo: \n");
        scanf("%s", &codigo1);

        printf("Digite seu nome: \n");
        scanf("%s", &nome1);

        printf("Digite a população: \n");
        scanf("%d", &populacao1);

        printf("Digite os pontos turisticos: \n");
        scanf("%d", &turisticos1);
    
        printf("Digite sua area: \n");
        scanf("%f", &area1);

        printf("Digite seu PIB: \n");
        scanf("%f", &pib1);

        printf("Nome: %s\nEstado: %s\nCodigo: %s\n", nome1, estado1, codigo1);
        printf("População: %d pessoas\nArea: %f KM\n", populacao1, area1);
        printf("Pontos turisticos: %d\nPIB %f reais\n", turisticos1, pib1);

        printf("Digite o estado da segunda carta: \n");
        scanf("%s", &estado2);

        printf("Digite seu codigo: \n");
        scanf("%s", &codigo2);

        printf("Digite seu nome: \n");
        scanf("%s", &nome2);

        printf("Digite a população: \n");
        scanf("%d", &populacao2);

        printf("Digite os pontos turisticos: \n");
        scanf("%d", &turisticos2);
    
        printf("Digite sua area: \n");
        scanf("%f", &area2);

        printf("Digite seu PIB: \n");
        scanf("%f", &pib2);

        printf("Nome: %s\nEstado: %s\nCodigo: %s\n", nome2, estado2, codigo2);
        printf("População: %d pessoas\nArea: %f KM\n", populacao2, area2);
        printf("Pontos turisticos: %d\nPIB %f reais\n", turisticos2, pib2);

        return 0;
}
