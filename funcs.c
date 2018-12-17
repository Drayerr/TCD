#include "./dataType.h"

int procurar(int partyId){
  for (int i=0; i<30; i++){
    if (partyVet[i].partyId == partyId){
      return i;
    }
  }
  printf("ID não encontrado!\n");
  return -1;
}

int getLastId(){
  int last;
  for (int i=0;i<30;i++){

    if (i==0 || last < partyVet[i].partyId){
      last = partyVet[i].partyId;
    }
  }
  return last;
}

void calcValor(int partyId){
  int i = procurar(partyId);
  float total1 = 0;
  float total2 = 0;
  float total3 = 0;
  float soma = 0;
  float totalDevassa = 0;
  float totalSkol = 0;
  float totalBrahma = 0;
  float totalSubzero = 0;
    
  if (partyVet[i].skol == 1){
    totalSkol = partyVet[i].uSkol * 3.0;
    
  } else {
    totalSkol = 0;
  }
  
  if (partyVet[i].devassa == 1){
    totalDevassa = partyVet[i].uDevassa * 3.5;
  } else {
    totalDevassa = 0;
  }
  
  if (partyVet[i].subzero == 1){
    totalSubzero = partyVet[i].uSubzero * 2.5;
  } else {
    totalSubzero = 0;
  }
  
  if (partyVet[i].brahma == 1){
    totalBrahma = partyVet[i].uBrahma * 3.5;
  } else {
    totalDevassa = 0;
  }
  
  soma = totalSkol + totalDevassa + totalSubzero + totalBrahma;
  
  if (partyVet[i].barType == 2){
    total1 = ((soma * 0.5) +60);    
    
    
      partyVet[i].costIng1 = total1;
      total2 = total1 + (total1 * 0.1);
      partyVet[i].costIng2 = total2;
      
      total3 = total1 + (total1 * 0.15);
      partyVet[i].costIng3 = total3;
     
  } else {
    total1 = partyVet[i].costOrg / partyVet[i].quantIng;
    
    
      partyVet[i].costIng1 = total1;
    
      
      total2 = total1 + (total1 * 0.1);
      partyVet[i].costIng2 = total2;
      
      total3 = total1 + (total1 * 0.15);
      partyVet[i].costIng3 = total3;
    
  }
  
  menu();
}

void lucroEvento(parties party){
  int i;
  float total;
  int partyId;

  system("cls");
 
  printf("------------------Resultado do Evento-----------------\n\n");
  printf("Digite o número da festa que deseja pesquisar\n");
  scanf("%d", &partyId);
  i = procurar(partyId);

  total = partyVet[i].money - partyVet[i].costOrg; //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@consertar isso

  if (total < 0.0){
    
    printf("Prejuizo de %.2f\n\n", total);

  } else {

    printf("Nao teve prejuízo\n");
    printf("Lucro de R$:%.2f\n", total);

  }

  printf("\n");
  system("pause");
  printf("\n");

  menu();
}

// fazer função para subtrair o "quantIng" pelo número que for inserido (OP-03)

void vendaIngresso(parties party){
  system("cls");
  int partyId = 0;
  float add = 0;
  printf("------------------Resultado do Evento-----------------\n\n");

  printf("Digite o número da festa que deseja pesquisar\n");
  scanf("%d", &partyId);

  int i = procurar(partyId);

  if (partyId != partyVet[i].partyId)
  {
    printf("\n");
    system("pause");
    menu();
  } else {

  int ingVendidos = 0;

back6:
  printf("Qual o tipo de ingresso?\n\n");
  printf("Popular (1) \n");
  printf("R$:%.2f\n\n", partyVet[i].costIng1);
  printf("Normal (2) \n");
  printf("R$:%.2f\n\n", partyVet[i].costIng2);
  printf("Especial (3) \n");
  printf("R$:%.2f\n\n", partyVet[i].costIng3);
  scanf("%d%*c", &partyVet[i].partyType);
  if (partyVet[i].partyType < 1 || partyVet[i].partyType > 3) {

    printf("\n");
    printf("Error!\n");
    printf("Nonexistent option\n\n");
    goto back6;

  } else {
    printf("\n");
    printf("Quantos ingressos vendidos?\n");
    scanf("%d", &ingVendidos);
      if (partyVet[i].quantIng >= ingVendidos){
        partyVet[i].quantIng = partyVet[i].quantIng - ingVendidos;
        printf("\n");
        printf("Foram vendidos %d\n", ingVendidos);
        printf("Sobraram %d ingressos\n\n", partyVet[i].quantIng);

          if(partyVet[i].partyType == 1){
            partyVet[i].money = partyVet[i].money + partyVet[i].costIng1 * ingVendidos;
          }
          if (partyVet[i].partyType == 2)
          {
            partyVet[i].money = partyVet[i].money + partyVet[i].costIng2 * ingVendidos;
          }
          if (partyVet[i].partyType == 3)
          {
            partyVet[i].money = partyVet[i].money + partyVet[i].costIng3 * ingVendidos;
          }

          printf("Há agora R$:%.2f na carteira da sua festa\n\n", partyVet[i].money);
          system("pause");
          menu();
      } else {
        printf("\n");
        printf("Ingressos insuficientes!\n\n");
        system("pause");
        menu();
      }
    }
  }
}

void resulGeral(parties party){
  system("cls");
  printf("-------------------Exibir Resultado Geral-------------------\n\n");
  int i;
  float total;
  for (i = 0; i == 30; i++){
    total = total + partyVet[i].money;
  }
  printf("Foi conseguido até agora com as festas R$:%.2f\n\n", total);
  system("pause");
  menu();
}

// fazer função para somar todos os "Lucros" e "prejuízos" do promoter para definir seu saldo (OP-05)

