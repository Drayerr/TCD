#include "./dataType.h"
#include "./menu.h"
#include <ctype.h>


void pesquisarEvento(parties party){
int i;
int partyId;

system("cls");

printf("-------------------Pesquisar Evento-------------------\n");
printf("Digite o número da festa que deseja pesquisar\n");
scanf("%d", &partyId);
i = procurar(partyId);

printf("Nome da festa: ");
printf("%s", partyVet[i].partyName);
printf("\n");
printf("Local da festa: ");
printf("%s", partyVet[i].local);
printf("\n");
printf("Data da festa: ");
printf("%s", partyVet[i].data);
printf("\n");
printf("ID da festa: ");
printf("%d", partyVet[i].partyId);
printf("\n");
printf("Custo da festa: ");
printf("%f", partyVet[i].costOrg);
printf("\n");
printf("Investimento: ");
printf("%f", partyVet[i].invest);
printf("\n");
printf("Quantidade de ingressos: ");
printf("%d", partyVet[i].quantIng);

printf("\n");
printf("\n");

system("pause");
printf("\n");

menu();
}