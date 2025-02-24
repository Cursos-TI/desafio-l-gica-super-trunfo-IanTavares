#include <stdio.h>
int main() {

    //Declaração das variáveis da primeira carta
    char estado1;
    int codigo_da_carta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area_em_km²1;
    float pib1;
    int numero_de_pontos_turisticos1;

    //Declaração das variáveis da segunda carta
    char estado2;
    int codigo_da_carta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area_em_km²2;
    float pib2;
    int numero_de_pontos_turisticos2;

    //Usuário digitará as entrada da primeira carta
    printf("\n********AQUI VOCÊ DEVE DIGITAR OS DADOS DA PRIMEIRA CARTA********\n");
    printf("Digite a letra do estado ('A-H'): \n");
    scanf(" %c", &estado1);  

    printf("Digite o código da carta ('1-4'): \n");
    scanf("%3s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km²1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);


    //Usuário digitará as entrada da segunda carta
    printf("\n********AQUI VOCÊ DEVE DIGITAR OS DADOS DA SEGUNDA CARTA********\n");
    printf("Digite a letra do estado ('A-H'): \n");
    scanf(" %c", &estado2);  

    printf("Digite o código da carta ('1-4'): \n");
    scanf("%3s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km²2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);


    //EXIBINDO OS DADOS CADASTRADOS
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km²1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km²2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);


    return 0;


}
