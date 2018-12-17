#ifndef DATATYPE_H
#define DATATYPE_H

typedef struct
{
  char partyName[50];
  char local[50];
  char data[50];
  int quantIng;
  float costOrg;    //remover depois
  float costIng;
  float costIng1;
  float costIng2;
  float costIng3;
  float invest;     //remover depois
  int partyId;
  float money;
  int drinks;
  int barType; // Normal ou open bar
  int partyType; // Normal; especial; popular
  int skol;
  int brahma;
  int subzero;
  int devassa;
  int uSkol;
  int uBrahma;
  int uSubzero;
  int uDevassa;
  
} parties;

parties partyVet[30];

int vetorCont;

#endif