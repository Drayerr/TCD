// #ifndef FOOBAR_H   // guardas de cabeçalho, impedem inclusões cíclicas
// #define FOOBAR_H

// extern int baz;    // declaração de uma variável global
//                    // como é global, valor inicial é zero.

// int foo(long arg); // declaração de uma função
// int bar(void);     // outra

// #endif

#include "./dataType.h"

#ifndef MENU_H
#define MENU_H

extern parties party;

void cadastrar(parties party);
void menu();
int procurar();
void pesquisarEvento();
int getLastId();
void calcValor();
void lucroEvento();
void vendaIngresso();
void resulGeral();

#endif

