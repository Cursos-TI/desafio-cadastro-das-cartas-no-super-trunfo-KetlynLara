#include <stdio.h>

int main(){
    
    // Carta 1
    char estado1[20];
    char codigo1[30];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    printf("Carta 1: \n");
    
    printf("Estado: \n");
    scanf(" %[^\n]", estado1);
    
    printf("Codigo: \n");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);
    
    printf("Área (m²): \n");
    scanf("%f", &area1);
    
    printf("PIB: \n");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos1);

   printf("-----------------------------------------\n");
     
    // Carta 2

    char estado2[20];
    char codigo2[30];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    printf("Carta 2: \n");
    
    printf("Estado: \n");
    scanf(" %[^\n]", estado2);
    
    printf("Codigo: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);
    
    printf("População: \n");
    scanf("%d", &populacao2);
    
    printf("Área: \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    printf("-----------------------------------------\n");

    // Retorno Carta 1

    printf("Carta 1 \n" "Estado: %s\n", estado1); 
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos1);

    printf("-----------------------------------------\n");
    
    // Retorno Carta 2

    printf("Carta 2 \n" "Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: (m²) %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontos2);
    
    printf("\n");
    

    
    return 0;
}