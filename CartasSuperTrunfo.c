#include <stdio.h>

int main(){

    char Estado; 
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;


    char Estado2; 
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    printf("Digite o Codigo da sua carta : ");
    scanf("%s", &Codigo);

    printf("Digite o nome do Estado : ");
    scanf("%s", &Estado);

    printf("Digite o nome da Cidade : ");
    scanf("%s", Cidade);

    printf("Digite o numero de populacao : ");
    scanf(" %i", &Populacao);

    printf("Area em quadrado : ");
    scanf(" %f", &Area);

    printf("Digite Valor do PIB : ");
    scanf("%f", &PIB);

    printf("Digite o Numero de Pontos Turisticos : ");
    scanf("%i", &Pontos);

    printf("\n");

    printf("Digite o Codigo da sua carta : ");
    scanf("%s", &Codigo2);

    printf("Digite o nome do Estado : ");
    scanf("%s", &Estado2);

    printf("Digite o nome da Cidade : ");
    scanf("%s", Cidade2);

    printf("Digite o numero de populacao : ");
    scanf(" %i", &Populacao2);

    printf("Area em quadrado : ");
    scanf(" %f", &Area2);

    printf("Digite Valor do PIB : ");
    scanf("%f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos : ");
    scanf("%i", &Pontos2);

    printf("\n");

    printf("Estado: %s\n", &Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacao: %i\n", Populacao);
    printf("Area: %.2f Km\n", Area);
    printf("PIB : %.2f Bilhoes de reais\n", PIB);
    printf("Numeros de Pontos Turisticos : %i\n", Pontos);

    printf("\n");

    printf("Estado: %s\n", &Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %i\n", Populacao2);
    printf("Area: %.2f Km\n", Area2);
    printf("PIB : %.2f Bilhoes de reais\n", PIB2);
    printf("Numeros de Pontos Turisticos : %i\n", Pontos2);

    printf("\n");
return 0;


}