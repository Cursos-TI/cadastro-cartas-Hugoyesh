#include <stdio.h>
int main (){

printf("Desafio Super Trunfo: Paises: \n");


printf("================================\n");
printf("     CARTA SUPER TRUNFO     \n");
printf("=================================\n");

//Variáveis da carta 1 (Brasil)

char estado1 = 'A';
char codigo1[4] = "A01";
char cidade1[50] = "Brasilia";
int populacao1 = 215300000;
float area1 = 8510000;
double PIB1 = 11.7e12;
int pontos_turisticos1 = 50;



//Entrada de dados

printf("digite o estado1: ");
scanf(" %c", &estado1);

printf("digite o codigo1: ");
scanf("%s", codigo1);

printf("digite a cidade1: ");
scanf("%s", cidade1);

printf("digite a populacao1: ");
scanf(" %d", &populacao1);

printf("digite a area1: ");
scanf("%f", &area1);

printf("digite o PIB1: ");
scanf("%lf", &PIB1);

printf("digite os pontos_turisticos1: ");
scanf("%d", &pontos_turisticos1);


printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %f\n", area1);
printf("PIB: %lf\n", PIB1);
printf("Pontos_turisticos: %d\n", pontos_turisticos1);




//Variáveis da carta 02 (Argentina)

char estado2 = 'B';
char codigo2[4] = "B02";
char cidade2[50] = "Buenos Aires";
int populacao2 = 46000000;
float area2 = 27800000;
double PIB2 = 64.0e12;
int pontos_turisticos2 = 30;



printf("digite o estado2: ");
scanf(" %c", &estado2);

printf("digite o codigo2: ");
scanf(" %s", codigo2);

printf("digite a cidade2: ");
scanf(" %[^\n]s", cidade2);

printf("digite a populacao2: ");
scanf(" %d", &populacao2);

printf("digite a area2: ");
scanf(" %f", &area2);

printf("digite o PIB2: ");
scanf(" %lf", &PIB2);

printf("digite os pontos_turisticos2: ");
scanf(" %d", &pontos_turisticos2);



printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB: %lf\n", PIB2);
printf("pontos_turisticos: %d\n", pontos_turisticos2);

return 0 ; 
}