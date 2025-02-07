#include <stdio.h> \\ Bibliotecas para entrada e saída de dados

// Criei a estrutura Carta, para armazenar os atributos de uma cidade:
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// O usuário irá cadastrar uma carta inserindo os valores de cada atributo manualmente.
// Os dados serão armazenados na estrutura CARTA
void cadastrarCarta(Carta *carta) {
    printf("Nome da cidade: ");
    scanf("%s", carta->nome);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Exibe os detalhes de cada carta de forma organizada
void exibirCarta(Carta carta) {
    printf("\nNome: %s\n", carta.nome);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
}

// Essa função compara dois atributos de cidades e determina a vencedora.
// Indica que normalmente o maior valor ganha, mas há exceção para densidade populacional.
void compararCartas(Carta c1, Carta c2, int atributo) {
    float valor1, valor2;
    int menorVence = 0;

// Escolha do atributo para comparar
    if (atributo == 1) {
        valor1 = c1.populacao;
        valor2 = c2.populacao;
    } else if (atributo == 2) {
        valor1 = c1.area;
        valor2 = c2.area;
    } else if (atributo == 3) {
        valor1 = c1.pib;
        valor2 = c2.pib;
    } else if (atributo == 4) {
        valor1 = c1.pontos_turisticos;
        valor2 = c2.pontos_turisticos;
    } else if (atributo == 5) {
        valor1 = c1.populacao / c1.area;
        valor2 = c2.populacao / c2.area;
        menorVence = 1;
    } else {
        printf("Atributo inválido!\n");
        return;
    }
    // O usuário escolhe um número de 1 a 5 para definir qual atributo comparar.
    // Se o atributo escolhido for inválido, a função exibe uma mensagem e sai.


    // Determinação da carta vencedora
    printf("\nComparando %s vs %s:\n", c1.nome, c2.nome);
    if ((valor1 > valor2 && !menorVence) || (valor1 < valor2 && menorVence)) {
        printf("Vencedor: %s\n", c1.nome);
    } else if ((valor1 < valor2 && !menorVence) || (valor1 > valor2 && menorVence)) {
        printf("Vencedor: %s\n", c2.nome);
    } else {
        printf("Empate!\n");
    }
}
    // Compara os valores e define a vencedora.
    // Se for densidade populacional (menorVence == 1), o menor valor ganha.
    // Se forem os outros atributos, o maior valor vence.


    // Declara duas cartas (c1 e c2).
    // Solicita ao usuário o cadastro das duas cartas.
int main() {
    Carta c1, c2;
    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&c1);
    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&c2);

    // Exibe as cartas cadastradas e mostra detalhes delas
    printf("\nCartas cadastradas:\n");
    exibirCarta(c1);
    exibirCarta(c2);

    // É definido o atributo que deseja comparar
    int atributo;
    printf("\nEscolha um atributo para comparar (1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional): ");
    scanf("%d", &atributo);
    compararCartas(c1, c2, atributo);
    
    // Compara as cartas e exibe o vencedor.
    // Retorna 0 para indicar que o programa terminou corretamente.
    return 0;
}
