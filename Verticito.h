//
// Created by xblao on 15/11/2017.
//

#ifndef GRAFITOS_VERTICITOS_H
#define GRAFITOS_VERTICITOS_H
#include "ListaArista.h"
#include "Aristita.h"
#include <iostream>

using namespace std;
class Verticito {
public:
    Verticito(string n);

    string nombre;
    ListaArista * aristas;

    Verticito* sig;

    ListaArista* obtenerAristas();
    Aristita * obtenerArista(string destino);
    void agregarArista(string origen, string dest, int peso);
    void agregarArista(Aristita * ari);
    void agregarArista(Verticito* origen, Verticito* dest, int peso);
};


#endif //GRAFITOS_VERTICITOS_H
