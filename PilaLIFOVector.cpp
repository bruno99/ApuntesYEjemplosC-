#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct InfoNodo{
    string NomberNodo;
    int IdNodo;
};

class PilaLIFO{
private:
    vector<InfoNodo> Nodos;
public:
    void pushNodo(InfoNodo n); //hemos puesto void pero realmente vendria bien un bool que avisase de que la pila esta llena
    InfoNodo popNodo(void);
    InfoNodo mostrarTOS(void);
    void mostrar(void); //esta clsae es con fin docente
    void borrarPila();
    unsigned int tamano();
    bool vacio();
};

void PilaLIFO::pushNodo(InfoNodo n)
{
    Nodos.push_back(n);
}

InfoNodo PilaLIFO::popNodo(void)
{
    InfoNodo aux;
    aux=Nodos.back();
    
    //Eliminamos el ultimo nodo del vector revisar
    Nodos.pop_back();
    
    return aux;
}

InfoNodo PilaLIFO::mostrarTOS()
{
    return Nodos.back();
}

void PilaLIFO::mostrar()
{
    cout << "Mi lista actual es: " << endl;
    if(Nodos.size() !=0)
    {
        for(int i=Nodos.size()-1;i>=0; i++)
        {
            cout << Nodos.at(i).IdNodo << " " << Nodos.at(i).NomberNodo << endl;
        }
        
    }
    else{
        cout << "la pila esta vacia " << endl;
    }
}

void PilaLIFO::borrarPila()
{
    Nodos.clear();
}

unsigned int PilaLIFO::tamano()
{
    return Nodos.size();
}

bool PilaLIFO::vacio()
{
    if (Nodos.size()==0)
    {
        return 0;
    }
    return 1;
}




int main()
{
    
    
    
    return 0;
}

