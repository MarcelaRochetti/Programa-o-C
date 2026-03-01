#include <stdio.h>

int main() {

// variáveis carta 1

    char estado1;
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

// variáveis carta 2

    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

// input carta 1

    printf ("Vamos começar o jogo!\n");
    printf ("Insira o estado da sua cidade:\n");
    scanf ("%c", &estado1);
   
    printf ("Agora, insira o código da cidade:\n");
    scanf ("%s", &codigo1);

    printf ("Insira o nome da cidade:\n");
    scanf ("%s", &cidade1);

    printf ("Insira a taxa populacional: \n");
    scanf ("%d", &populacao1);

    printf ("Insira a área da cidade:\n");
    scanf ("%f", &area1);

    printf ("Insira o PIB:\n");
    scanf ("%f", &pib1);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontos1);

//output carta 1

    printf ("Carta 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de pontos turrísticos: %d\n", pontos1);

//input carta 2

    printf ("Vamos para a segunda rodada!\n");
    printf ("Insira o estado da sua cidade:\n");
    scanf ("%c", &estado2);
   
    printf ("Agora, insira o código da cidade:\n");
    scanf ("%s", &codigo2);

    printf ("Insira o nome da cidade:\n");
    scanf ("%s", &cidade2);

    printf ("Insira a taxa populacional: \n");
    scanf ("%d", &populacao2);

    printf ("Insira a área da cidade:\n");
    scanf ("%f", &area2);

    printf ("Insira o PIB:\n");
    scanf ("%f", &pib2);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontos2);

// output carta 2

    printf ("Carta 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de pontos turrísticos: %d\n", pontos2);

    return 0;

    


}
