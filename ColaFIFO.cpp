#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct InfoNodo{
    string NomberNodo;
    int IdNodo;
};

class ColaFIFO{
private:
    vector<InfoNodo> Nodos;
public:
    void pushNodo(InfoNodo n); 
    InfoNodo popNodo(void);
    void mostrar(void); 
    void borrarCola();
    unsigned int tamano();
    bool vacio();
};



int main()
{
    
    
    
    return 0;
}


void ColaFIFO::pushNodo(InfoNodo n)
{
    Nodos.push_back(n);
}

InfoNodo ColaFIFO::popNodo()
{
    InfoNodo aux;
    aux=Nodos.front();
    
    Nodos.erase(Nodos.begin())+0;//el +0 no hace nada, es para el concepto 
    return aux;
}

void ColaFIFO::mostrar()
{
    cout << "Mi colaFIFO actual es: " << endl;
    if(Nodos.size() !=0)
        {
            for(int i=Nodos.size()-1;i>=0; i++)
            {
                cout << Nodos.at(i).IdNodo << " " << Nodos.at(i).NomberNodo << endl;
            }
            
        }
        else{
            cout << "la cola esta vacia " << endl;
        }
}

void ColaFIFO::borrarCola()
{
    Nodos.clear();
}
