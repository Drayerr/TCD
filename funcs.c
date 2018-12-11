#include "./dataType.h"

int procurar(int partyId){
  for (int i=0; i<30; i++){
    if (partyVet[i].partyId == partyId){
      return i;
    }
  }
  printf("ID not found!");
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

float calcValor(parties party){
  float total = 0;
  float soma = 0;
  float totalDevassa = 0;
  float totalSkol = 0;
  float totalBrahma = 0;
  float totalSubzero = 0;

  if (party.skol == 1){
    totalSkol = party.skol * 3.0;
  } else {
    totalSkol = 0;
  }

  if (party.devassa == 1){
    totalDevassa = party.devassa * 3.5;
  } else {
    totalDevassa = 0;
  }

  if (party.subzero == 1){
    totalSubzero = party.subzero * 2.5;
  } else {
    totalSubzero = 0;
  }

  if (party.brahma == 1){
    totalBrahma = party.brahma * 3.5;
  } else {
    totalDevassa = 0;
  }

  soma = totalSkol + totalDevassa + totalSubzero + totalBrahma;

  if (party.barType == 2){
    total = ((soma * 0.5) +60);

    if (party.partyType == 1){
      return total;
    } else {
      if (party.partyType == 2){
        total = total + (total * 0.1);
        return total;
      } else {
        total = total + (total * 0.15);
        return total;
      }
    }
  } else {
    total = party.costOrg / party.quantIng;

    if (party.partyType == 1)  {
      return total;
    } else {
      if (party.partyType == 2){
        total = total + (total * 0.1);
        return total;
      } else {
        total = total + (total * 0.15);
        return total;
      }
    }
  }
}
