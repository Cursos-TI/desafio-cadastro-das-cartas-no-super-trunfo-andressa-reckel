#include<stdio.h>

int main(){

      // O programa foi feito em C e por isso, não foi declarado uma string mas foi feito um array

   // Declaração de variáveis Carta 1
   
   char nomePais1[20];
   int populacaoPais1 = 0;
   float area1 = 0;
   float PIB1 = 0;
   int pontosTuristicos1 = 0;
   float densidadeDemografica1= 0;
   float pibCap1 = 0; 

   // Declaração de variáveis Carta 2
   
   char nomePais2[20];
   int populacaoPais2 = 0;
   float area2 = 0;
   float PIB2 = 0;
   int pontosTuristicos2= 0;
   float densidadeDemografica2= 0;
   float pibCap2 = 0; 

   int escolhausuario = 0;

   //Entrada de dados carta 1
      printf ("Carta 1\n");
      printf("Digite o nome do país:\n");
      scanf("%s",nomePais1);
      printf("Digite a população do país:\n");
      scanf("%d",&populacaoPais1);
      printf("Digite a área do país:\n");
      scanf("%f",&area1);
      printf("Digite o PIB do país:\n");
      scanf("%f", &PIB1);
      printf("Digite o número de pontos turísticos:\n");
      scanf("%d", &pontosTuristicos1);


   //Entrada de dados Carta 2
      printf("\n\nCarta 2\n");
      printf("Digite o nome do país:\n");
      scanf("%s",nomePais2);
      printf("Digite a população do país:\n");
      scanf("%d",&populacaoPais2);
      printf("Digite a área do país:\n");
      scanf("%f",&area2);
      printf("Digite o PIB do país:\n");
      scanf("%f", &PIB2);
      printf("Digite o número de pontos turísticos:\n");
      scanf("%d", &pontosTuristicos2);


      
   // cálculos

      // cálculo de densidade populacional país 1
      densidadeDemografica1 = (populacaoPais1 / area1); 
      pibCap1 = (PIB1 / populacaoPais1);
      // cálculo de densidade populacional país 2
      densidadeDemografica2 = (populacaoPais2 / area2); 
      pibCap2 = (PIB2 / populacaoPais2);
      //printf("%f\n\n",pibCap1);
      //printf("%f\n\n",pibCap2);

   printf("##Vamos jogar!##\n\n");   
   printf("Digite o valor do atributo que você deseja comparar:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demografica\n");
   scanf("%d", &escolhausuario);

switch (escolhausuario)
{
case 1:
   if (populacaoPais1>populacaoPais2){
      printf("Os países em comparação são:%s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi população\n");
      printf("Os valores da população para cada país foi: %s:%d e %s:%d\n",nomePais1, populacaoPais1, nomePais2, populacaoPais2);
      printf("A carta 1 referente ao País %s venceu!\n",nomePais1);
   } else if (populacaoPais1<populacaoPais2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi população\n");
      printf("Os valores da população para cada País foi: %s: %d e %s: %d\n",nomePais1, populacaoPais1, nomePais2, populacaoPais2);
      printf("A carta 2 referente ao País %s venceu!",nomePais2);
   }else{
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi população\n");
      printf("Os valores da população para cada País foi: %s: %d e %s: %d",nomePais1, populacaoPais1, nomePais2, populacaoPais2);
      printf("Empate!");
   }

   break;

case 2:
   if (area1>area2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi área\n");
      printf("Os valores da área para cada país foi: %s: %f e %s: %f\n",nomePais1, area1, nomePais2, area2);
      printf("A carta 1 referente ao País %s venceu!\n",nomePais1);
   } else if (area1<area2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi área\n");
      printf("Os valores da área para cada País foi: %s: %f e %s: %f\n",nomePais1, area1, nomePais2, area2);
      printf("A carta 2 referente ao País %s venceu!",nomePais2);
   }else{
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi área\n");
      printf("Os valores da área para cada País foi: %s: %f e %s: %f\n",nomePais1, area1, nomePais2, area2);
      printf("Empate!");
   }

   break;


   case 3:
   if (PIB1>PIB2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi PIB\n");
      printf("Os valores do PIB para cada país foi: %s: %f e %s: %f\n",nomePais1, PIB1, nomePais2, PIB2);
      printf("A carta 1 referente ao País %s venceu!\n",nomePais1);
   } else if (PIB1<PIB2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi PIB\n");
      printf("Os valores de PIB para cada País foi: %s: %f e %s: %f\n",nomePais1, PIB1, nomePais2, PIB2);
      printf("A carta 2 referente ao País %s venceu!",nomePais2);
   }else{
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi PIB\n");
      printf("Os valores de PIB para cada País foi: %s: %f e %s: %f\n",nomePais1, PIB1, nomePais2, PIB2);
      printf("Empate!");
   }

   break;


  case 4:
   if (pontosTuristicos1>pontosTuristicos2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Número de pontos turísticos\n");
      printf("Os números de pontos turisticos para cada país foi: %s: %d e %s: %d\n",nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
      printf("A carta 1 referente ao País %s venceu!\n",nomePais1);
   } else if (pontosTuristicos1<pontosTuristicos2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Número de pontos turísticos\n");
      printf("Os números de pontos turisticos para cada País foi: %s: %d e %s: %d\n",nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
      printf("A carta 2 referente ao País %s venceu!",nomePais2);
   }else{
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Número de pontos turísticos\n");
      printf("Os valores de pontos turisticos para cada País foi: %s: %d e %s: %d",nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
      printf("Empate!");
   }

   break;

  case 5:
   if (densidadeDemografica1<densidadeDemografica2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Densidade demografica\n");
      printf("Os valores da densidade demografica para cada país foi: %s: %f e %s: %f\n",nomePais1, densidadeDemografica1, nomePais2,densidadeDemografica2);
      printf("A carta 1 referente a País %s venceu!\n",nomePais1);
   } else if (densidadeDemografica1>densidadeDemografica2){
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Densidade demograficas\n");
      printf("Os valores de densidade demografica para cada País foi: %s: %f e %s: %f\n",nomePais1, densidadeDemografica1, nomePais2,densidadeDemografica2);
      printf("A carta 2 referente ao País %s venceu!",nomePais2);
   }else{
      printf("Os países em comparação são: %s e %s\n",nomePais1, nomePais2);
      printf("O atributo usado na comparação foi Densidade demografica\n");
      printf("Os valores de densidade demografica para cada País foi: %s: %f e %s: %f\n",nomePais1, densidadeDemografica1, nomePais2,densidadeDemografica2);
      printf("Empate!");
   }
   break;
default: 
printf("Valor não encontrado!");
   
}


   return 0;
}