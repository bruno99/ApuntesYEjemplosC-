#include "lista.h"
using namespace std;
#include <iostream>
#include <sstream>
Lista::Lista()
{
   inicio=nullptr;
   fin=nullptr;
}

bool Lista::vacia()
{
    if(inicio=nullptr){
        return true;
    }else{
        return false;
    }
}

int Lista::elementos()
{
   NodoLista *p = inicio;
   if(vacia())
       return 0;
   int cont=0;
   while(p!= nullptr){
       cont ++;
       p= p->siguiente;
   }
}

void Lista::insertaInicio(int v)
{
    NodoLista *p = new NodoLista;
    p->dato = v;
    if(vacia()){
        p->siguiente=nullptr;
        inicio=p;
        fin=p;
    }else{
        p->siguiente=inicio;
        inicio=p;
    }
    
}

void Lista::insertaFin(int v)
{
    NodoLista *p = new NodoLista;
    p->dato = v;
    if(vacia()){
        p->siguiente=nullptr;
        inicio=p;
        fin=p;
    }else{
        fin->siguiente=p;
        fin=p;
    }
}

int Lista::eliminaInicio()
{
    
    NodoLista* p=inicio;
    if(vacia())
        throw ("Lista vacia");
    int v= inicio->dato;
    if(inicio==fin){
        inicio=nullptr;
        fin=nullptr;
    }else{
        inicio=inicio->siguiente;
    }
    delete p;
    return v;
}

int Lista::eliminaFin()
{
      NodoLista* p=fin;
      if(vacia())
          throw ("Lista vacia");
      int v= fin->dato;
      if(inicio==fin){
          inicio=nullptr;
          fin=nullptr;
      }else{
          NodoLista* q=inicio;
          while(q->siguiente!= p){
              q = q->siguiente;
          }
          fin= q;
      }
      delete p;
      return v;
}

void Lista::elimina()
{
    while (inicio!=nullptr) {
           eliminaFin();
    }
}

std::string Lista::toString(std::string s)
{
    std::stringstream ss;
    
    NodoLista* p = inicio;
    if(p==nullptr)
        ss << "Lista vacia " << endl;
    else{
        ss << s << " {";
        
        while (p != nullptr){
            ss << p->dato << ",";
        p=p->siguiente;
        }
        
        ss << "}" << endl;
    }
    return ss.str();
    
}
