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


