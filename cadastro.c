#include "./dataType.h"
#include "./menu.h"
#include <ctype.h>
#include "./funcs.c"


void cadastrar(parties party)
{
  int i ;
  system("cls");
  // getLastId(); //CHAMANDO A FUNÇÃO QUE ACHA O ULTIMO ID AQUI
  printf("-------------------Cadastro de Evento-------------------\n");

  i = vetorCont;

  printf("Nome do evento\n");
  scanf("%s*c", &partyVet[i].partyName);

  printf("Local do evento\n");
  scanf("%s%*c", &partyVet[i].local);

  printf("Data\n");
  scanf("%s%*c", &partyVet[i].data);

  printf("ID da festa\n");
  scanf("%d%*c", &partyVet[i].partyId);

  printf("Custo da organização\n");
  scanf("%f%*c", &partyVet[i].costOrg);

  printf("Investimento\n");
  scanf("%f%*c", &partyVet[i].invest);

  printf("Quantos ingressos serão colocados à venda?\n");
  scanf("%d%*c", &partyVet[i].quantIng);
  

  // Escolhendo as bebidas
  printf("Quais bebidas terão na festa? \n");
  printf("Entre com (1) para sim e (2) para não \n\n");

  back1: //BACKSSSS

  printf("Skol\n");
  printf("R$ 03,00\n");
  scanf("%d%*c", &partyVet[i].skol);
  if (partyVet[i].skol < 1 || partyVet[i].skol > 2)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back1;
  }
  else
  {
    printf("\n");
  }

  back2: //BACKKKK

  printf("Devassa\n");
  printf("R$ 03,50\n");
  scanf("%d%*c", &partyVet[i].devassa);
  if (partyVet[i].devassa < 1 || partyVet[i].devassa > 2)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back2;
  }
  else
  {
    printf("\n");
  }

  back3: //BACCK3

  printf("Subzero\n");
  printf("R$ 02,50\n");
  scanf("%d%*c", &partyVet[i].subzero);
  if (partyVet[i].subzero < 1 || partyVet[i].subzero > 2)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back3;
  }
  else
  {
    printf("\n");
  }

  back4: //BACK4

  printf("Brahma\n");
  printf("R$ 03,50\n");
  scanf("%d%*c", &partyVet[i].brahma);
  if (partyVet[i].brahma < 1 || partyVet[i].brahma > 2)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back4;
  }
  else
  {
    printf("\n");
  }

  // Finalização, escolhendo se a festa é open bar e o tipo dela
  back5:
  printf("A festa será normal ou open bar\n");
  printf("Normal (1)\n");
  printf("Open Bar (2)\n");
  scanf("%d%*c", &partyVet[i].barType);
  if (partyVet[i].barType < 1 || partyVet[i].barType > 2)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back5;
  }
  else
  {
    printf("\n");
  }

  back6:
  printf("Qual será o tipo da festa? \n");
  printf("Popular (1) \n");
  printf("Normal (2) \n");
  printf("Especial (3) \n");
  scanf("%d%*c", &partyVet[i].partyType);
  if (partyVet[i].partyType < 1 || partyVet[i].partyType > 3)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back6;
  }
  else
  {
    printf("-------------------Festa cadastrada!-------------------\n");
    vetorCont += 1;
    printf("\n");
    system("pause");
    printf("\n");
  }
  menu();
}