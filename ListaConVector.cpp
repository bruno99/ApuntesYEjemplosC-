#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct elemento{
    string nombre;
};

void InsertarNodoEnListaVacia(string info, vector<elemento> &lista){
    elemento aux;
    aux.nombre=info;
    
    lista.push_back(aux);
}

void InsertarNodoInicioLista(string info, vector<elemento> &lista){
    elemento aux;
    aux.nombre=info;
    
    lista.insert(lista.begin()+0,aux);//Insertamos en el inicio de la lista
}

void InsertarNodoFinLista(string info, vector<elemento> &lista){
    
    elemento aux;
    aux.nombre=info;
    
    lista.push_back(aux);
}

bool InsertarNodoPosicion(string info, vector<elemento> &lista, int posicion){
    elemento aux;
    aux.nombre=info;
    
    lista.insert(lista.begin()+posicion,aux);
}
bool SuprimirInicioLista(vector<elemento> &lista){
    lista.erase(lista.begin()+0);
}

bool SuprimirNodoPosicion(vector<elemento> &lista, int posicion){
    lista.erase(lista.begin()+posicion);
}

void Destruir(vector<elemento> &lista){
    while (lista.size()>0) {
        SuprimirInicioLista(lista);
    }
}

void ImprimirLista(vector<elemento> &lista){
    cout << "Inicio lista " << endl;
    for(elemento temporal:lista)
    {
        cout << "Nodo: " << temporal.nombre << endl;
    }
    cout << "Fin de lista" << endl;
}

int main()
{
    vector<elemento> MiLista;
    string Nombre;
    
    elemento aux;
    //1
    InsertarNodoEnListaVacia(aux.nombre,MiLista);
    ImprimirLista(MiLista);
    
    //2
    InsertarNodoFinLista(aux.nombre,MiLista);
    ImprimirLista(MiLista);
    
    
    
}
