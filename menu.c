#include "./dataType.h"
#include "./menu.h"
#include <ctype.h>

void cadastrar(parties party)
{

  system("cls");

  printf("-------------------Cadastro de Evento-------------------\n");

  printf("Nome do evento\n");
  scanf("%s", &party.partyName);

  printf("Local do evento\n");
  scanf("%s", &party.local);

  printf("Data\n");
  scanf("%s", &party.data);

  printf("ID da festa\n");
  scanf("%d", &party.partyId);

  printf("Custo da organização\n");
  scanf("%f", &party.costOrg);

  printf("Investimento\n");
  scanf("%f", &party.invest);

  printf("Quantos ingressos serão colocados à venda?\n");
  scanf("%d", &party.quantIng);
  

  // Escolhendo as bebidas
  printf("Quais bebidas terão na festa? \n");
  printf("Entre com (1) para sim e (2) para não \n\n");

  back1: //BACKSSSS

  printf("Skol\n");
  printf("R$ 03,00\n");
  scanf("%d", &party.skol);
  if (party.skol < 1 || party.skol > 2)
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
  scanf("%d", &party.devassa);
  if (party.devassa < 1 || party.devassa > 2)
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
  scanf("%d", &party.subzero);
  if (party.subzero < 1 || party.subzero > 2)
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
  scanf("%d", &party.brahma);
  if (party.brahma < 1 || party.brahma > 2)
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
  scanf("%d", &party.barType);
  if (party.barType < 1 || party.barType > 2)
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
  scanf("%d", &party.partyType);
  if (party.partyType < 1 || party.partyType > 3)
  {
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back6;
  }
  else
  {
    printf("-------------------Festa cadastrada!-------------------\n");
  }

}

parties party;

void menu()
{

  int menuSelect = 0;

  system("cls");
  printf("Bem vindo!\n\n");
  printf("1 - Cadastrar evento\n");
  printf("2 - Pesquisar evento\n");
  printf("3 - Ingressos Vendidos\n");
  printf("4 - Resultado por Evento\n");
  printf("5 - Exibir Resultado Geral\n");
  printf("6 - Sair\n\n");

  scanf("%d", &menuSelect);

  switch (menuSelect)
  {
  case 1:
    cadastrar(party);

    break;

  case 2:
    system("cls");
    printf("-------------------Pesquisar Evento-------------------\n");
    break;

  case 3:
    system("cls");
    printf("-------------------Ingressos Vendidos-------------------\n");
    break;

  case 4:
    system("cls");
    printf("-------------------Resultado por Evento-------------------\n");
    break;

  case 5:
    system("cls");
    printf("-------------------Exibir Resultado Geral-------------------\n");
    break;

  case 6:
    system("exit");
    break;
  }


  // ...
}
