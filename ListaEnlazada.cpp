#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct elemento{
    string nombre;
    elemento *SiguienteElemento;
};


struct IndentificadorLista
{//Para mayor control es preferible tener identificado el primer y ultimo elemento de la lista y su tamaño
    elemento *Primero;
    elemento *Ultimo;
    int tamano;
};

class ListaSimple{
private:
    IndentificadorLista *MiLista=new IndentificadorLista;//Reservamos dinamicamente un puntero a IdentificadorLista
public:
    ListaSimple();
    void InsertarNodoEnListaVacia(string info);
    void InsertarNodoInicioLista(string info);
    void InsertarNodoFinLista(string info);
    void InsertarNodoPosicion(string info, int posicion);
    bool SuprimirInicioLista(void);
    bool SuprimirNodoPosicion(void);
    void Destruir(void);
    void ImprimirLista(void);
};

ListaSimple::ListaSimple()
{
    MiLista->Primero=nullptr;
    MiLista->Ultimo=nullptr;
    MiLista->tamano=0;
}

void ListaSimple::InsertarNodoEnListaVacia(string info)
{
    elemento *NodoNuevo;
    NodoNuevo = new elemento;
    NodoNuevo->nombre=info;
    NodoNuevo->SiguienteElemento=nullptr;
    MiLista->Primero=NodoNuevo;
    MiLista->Ultimo=NodoNuevo;
    MiLista->tamano++;
    
}

void ListaSimple::InsertarNodoInicioLista(string info)
{
      elemento *NodoNuevo;
    NodoNuevo = new elemento;
    NodoNuevo->nombre=info;
    NodoNuevo->SiguienteElemento=MiLista->Primero;
    MiLista->Primero=NodoNuevo;
    MiLista->tamano++;
    
}

void ListaSimple::InsertarNodoFinLista(string info)
{
    
}

void ListaSimple::InsertarNodoPosicion(string info, int posicion)
{
    
}

bool ListaSimple::SuprimirInicioLista()
{
    
}

bool ListaSimple::SuprimirNodoPosicion()
{
    
}

void ListaSimple::Destruir()
{
    
}

void ListaSimple::ImprimirLista()
{
    
}
