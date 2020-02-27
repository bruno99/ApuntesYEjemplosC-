#ifndef LISTA_H
#define LISTA_H

#include "NodoLista.h"

#include <string>

class Lista {
public:
 Lista();
 ~Lista();
 bool vacia();
 int elementos();
 bool existe(int v);
 void insertaInicio(int v);
 void insertaFin(int v);
 int eliminaInicio();
 int eliminaFin();
 void elimina();
 std::string toString(std::string s);
private:
 NodoLista *inicio, *fin;
 NodoLista* busca(int v);
 void elimina(NodoLista *p);
};

#endif // LISTA_H
