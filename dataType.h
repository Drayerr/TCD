#ifndef DATATYPE_H
#define DATATYPE_H

typedef struct
{
  char partyName[30];
  char local[50];
  char data[50];
  int quantIng;
  float costOrg;
  float invest;
  int partyId;
  float money;
  int drinks;
  int barType; // Normal ou open bar
  int partyType; // Normal; especial; popular
  int skol;
  int brahma;
  int subzero;
  int devassa;
  
} parties;



#endif