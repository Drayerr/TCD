#include "./dataType.h"
#include "./menu.h"
#include <ctype.h>
#include <locale.h>
parties party;

void menu()
{
  setlocale(LC_ALL, "");
  back :

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
    vendaIngresso(party);

    break;

  case 4:
    lucroEvento(party);

    break;

  case 5:
    resulGeral();

    break;

  case 6:
    system("exit");
    break;

  default:
    goto back;
  }

  // ...
}
