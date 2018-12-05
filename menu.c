#include "./dataType.h"
#include "./menu.h"
#include <ctype.h>



parties party;

void menu()
{

  system("cls");
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
    pesquisarEvento(party);
    
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
