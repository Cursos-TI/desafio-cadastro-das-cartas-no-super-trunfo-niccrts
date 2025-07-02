#include <stdio.h>

int main() {

/*

Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais


Carta 2:

Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais


Estado: char
 
Código da Carta: char[] (um array de caracteres, ou string)
 
Nome da Cidade: char[] (string)
 
População: Tipo: int
 
Área (em km²): Tipo: float
 
PIB: float
 
Número de Pontos Turísticos: int

densidade populacional (float)
População / área da cidade

PIB per capita (float)
PIB/ população

*/

//declaração de variaveis
int População1, NPontos_Turisticos1, População2, NPontos_Turisticos2;
char CODcarta1[50], NomeCidade1[50], CODcarta2[50], NomeCidade2[50], Estado1[50], Estado2[50];
float PIB1, Area1, PIB2, Area2, Densidade1, Densidade2, PIB_per_capita1, PIB_per_capita2;



//entrada de dados e armazenamento primeira carta

printf("--DIGITE OS DADOS DA PRIMEIRA CARTA-- \n\n");

printf("Digite o Estado da primeira carta: \n" );
scanf("%s", Estado1);

printf("Digite o código da sua primeira carta: \n" );
scanf("%s", CODcarta1);

printf("Digite a Cidade da primeira carta: \n" );
scanf("%s", NomeCidade1);

printf("Digite a população da primeira carta: \n" );
scanf("%d", &População1);

printf("Digite a área da primeira cidade: \n" );
scanf("%f", &Area1);

printf("Digite o PIB da primeira cidade: \n" );
scanf("%f", &PIB1);

printf("Digite o número de pontos túristicos da primeira cidade: \n" );
scanf("%d", &NPontos_Turisticos1);

Densidade1 = População1 / Area1;
PIB_per_capita1 = PIB1 / População1;


printf("--DADOS DA PRIMEIRA CARTA COLETADOS COM SUCESSO!-- \n\n");

//entrada de dados de armazenamento segunda carta

printf("--DIGITE OS DADOS DA SEGUNDA CARTA!-- \n");

printf("Digite o Estado da segunda carta: \n" );
scanf("%s", Estado2);

printf("Digite o código da sua segunda carta: \n" );
scanf("%s", CODcarta2);

printf("Digite a Cidade da segunda carta: \n" );
scanf("%s", NomeCidade2);

printf("Digite a população da segunda carta: \n" );
scanf("%d", &População2);

printf("Digite a área da segunda cidade: \n" );
scanf("%f", &Area2);

printf("Digite o PIB da segunda cidade: \n" );
scanf("%f", &PIB2);

printf("Digite o número de pontos túristicos da segunda cidade: \n" );
scanf("%d", &NPontos_Turisticos2);

Densidade2 = População2 / Area2;
PIB_per_capita2 = PIB2 / População2;


printf("--DADOS DA SEGUNDA CARTA COLETADOS COM SUCESSO--\n\n");

//apresentação dos dados

printf("--CARTA 01--\n");
printf("Nome da Cidade: %s\nEstado: %s \n" , Estado1 , NomeCidade1);
printf("Área: %.02f km²\nPopulação %.02f" , Area1, População1);
printf("PIB: %.02f bilhões de reais\n" , PIB1);
printf("Pontos Túristicos: %d\n" , NPontos_Turisticos1);
printf("Código da carta: %s\n" , CODcarta1);
printf("Densidade Populacional: %.2f hab/km²\n" , Densidade1);
printf("PIB per Capita: %.2f reais\n\n" , PIB_per_capita1);

printf("--CARTA 02--\n");
printf("Nome da Cidade: %s \nEstado: %s \n" , Estado2 , NomeCidade2);
printf("Área: %.02f km²\nPopulação %.02f\n" , Area2, População2);
printf("PIB: %.02f bilhões de reais\n" , PIB2);
printf("Pontos Túristicos: %d\n" , NPontos_Turisticos2);
printf("Código da carta: %s\n" , CODcarta2);
printf("Densidade Populacional: %.2f hab/km²\n" , Densidade2);
printf("PIB per Capita: %.2f reais\n\n" , PIB_per_capita2);

return 0; 



































































}
