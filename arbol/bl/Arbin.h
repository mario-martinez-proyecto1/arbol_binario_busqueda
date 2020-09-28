//
// Created by Mario Martinez on 22/09/20.
//

#ifndef ARBOL_BINARIO_BUSQUEDA_ARBIN_H
#define ARBOL_BINARIO_BUSQUEDA_ARBIN_H
#include <string>
using namespace std;

#include "Nodo.h"

class Arbin {
public:
    Arbin();

    virtual ~Arbin();

    Nodo *getRaiz() const;

    void setRaiz(Nodo *raiz);

    int getPeso() const;

    void setPeso(int peso);

    int pesoArbin(); //Calcula el número de elementos del Arbin

    bool esVacioArbin(); //Retorna si un Arbin es vacío o no

    bool insertarElem(int); //Inserta un entero en el árbol ordenado.

    int buscarMaximo(); //Busca el elemento de mayor valor

    int buscarMinimo(); //Busca el elemento de menor valor

    bool esHoja(int); //Dice si un Arbin es hoja o no

    int nivel(); //Calcula del nivel de un Arbin

    int altura(); // calcula la altura del árbol.

    int numHojas(); //Calcula el número de hojas de un Arbin

    string camino(int, int); // Calcula el camino entre dos elementos del Arbin

    string preOrden(); // Imprime el Arbin de forma RID (raíz - izquierda - derecha)

    string inOrden(); // Imprime el Arbin de forma IRD (izquierda - raíz - derecha)

    string postOrden(); // Imprime el Arbin de forma IDR (izquierda - derecha - raíz)

    bool eliminarElem(int); //Elimina un elemento del Arbin.

    // TODO: pendiente de acá en adelante.

    bool esCompleto(); //Retorna si un Arbin es completo o no

    bool igualesArbin(); //Dice si dos Arbin son iguales o no.


private:
    Nodo *raiz;
    int peso;

    void insertarElemRecursivo(Nodo* , Nodo*, int, int); //Inserta un entero en el árbol ordenado.

    Nodo *buscarNodo(int); // retorna el nodo del valor pasado por parámetro

    Nodo *buscarNodoPadre(int); // etorna el nodo previo del valor pasado por parámetro

    int buscarMaximo(Nodo*); //Busca el elemento de mayor valor

    int buscarMinimo(Nodo*); //Busca el elemento de menor valor

    int nivelRecursivo(Nodo*); //Calcula la nivel de un Arbin

    int numHojasRecursivo(Nodo*); //Calcula el número de hojas de un Arbin

    string caminoRecursivo(Nodo*, int); //Calcula el camino entre dos elementos del Arbin

    string preOrdenRecursivo(Nodo*); // Imprime el Arbin de forma RID (raíz - izquierda - derecha)

    string inOrdenRecursivo(Nodo*); // Imprime el Arbin de forma IRD (izquierda - raíz - derecha)

    string postOrdenRecursivo(Nodo*); // Imprime el Arbin de forma IDR (izquierda - derecha - raíz)

    void  eliminarIzq(Nodo *, int);

    Nodo *unirArbin(Nodo*, Nodo*); // Une dos árboles
};


#endif //ARBOL_BINARIO_BUSQUEDA_ARBIN_H
