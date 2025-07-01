#include <stdio.h>


int main() {
   int População1, NPontos_Turisticos1, População2, NPontos_Turisticos2;
char CODcarta1[50], NomeCidade1[50], CODcarta2[50], NomeCidade2[50], Estado1[50], Estado2[50];
float PIB1, Area1, PIB2, Area2;



//entrada de dados e armazenamento primeira carta

printf("--DIGITE OS DADOS DA PRIMEIRA CARTA-- \n\n");

printf("Digite o Estado da primeira carta: \n" );
scanf("%s", Estado1);

printf("Digite a Cidade da primeira carta: \n" );
scanf("%s", NomeCidade1);

printf("Digite a área da primeira cidade: \n" );
scanf("%f", &Area1);

printf("Digite o PIB da primeira cidade: \n" );
scanf("%f", &PIB1);

printf("Digite o número de pontos túristicos da primeira cidade: \n" );
scanf("%d", &NPontos_Turisticos1);

printf("Digite o código da sua primeira carta: \n" );
scanf("%s", CODcarta1);

printf("Digite a população da primeira carta: \n" );
scanf("%d", &População1);

printf("--DADOS DA PRIMEIRA CARTA COLETADOS COM SUCESSO!-- \n\n");

//entrada de dados de armazenamento segunda carta

printf("--DIGITE OS DADOS DA SEGUNDA CARTA!-- \n");

printf("Digite o Estado da segunda carta: \n" );
scanf("%s", Estado2);

printf("Digite a Cidade da segunda carta: \n" );
scanf("%s", NomeCidade2);

printf("Digite a área da segunda cidade: \n" );
scanf("%f", &Area2);

printf("Digite o PIB da segunda cidade: \n" );
scanf("%f", &PIB2);

printf("Digite o número de pontos túristicos da segunda cidade: \n" );
scanf("%d", &NPontos_Turisticos2);

printf("Digite o código da sua segunda carta: \n" );
scanf("%s", CODcarta2);

printf("Digite a população da segunda carta: \n" );
scanf("%d", &População2);

printf("--DADOS DA SEGUNDA CARTA COLETADOS COM SUCESSO--\n\n");

//apresentação dos dados

printf("--CARTA 01--\n");
printf("Nome da Cidade: %s \nEstado: %s \n" , Estado1 , NomeCidade1);
printf("Área: %.02f\nPopulação %.02f" , Area1, População1);
printf("PIB: %.02f\n" , PIB1);
printf("Pontos Túristicos: %d\n" , NPontos_Turisticos1);
printf("Código da carta: %s\n\n" , CODcarta1);

printf("--CARTA 02--\n");
printf("Nome da Cidade: %s \nEstado: %s \n" , Estado2 , NomeCidade2);
printf("Área: %.02f\nPopulação %.02f\n" , Area2, População2);
printf("PIB: %.02f\n" , PIB2);
printf("Pontos Túristicos: %d\n" , NPontos_Turisticos2);
printf("Código da carta: %s\n\n" , CODcarta2);

    return 0;
}
