//
// Created by xblao on 15/11/2017.
//

#ifndef GRAFITOS_GRAFOOS_H
#define GRAFITOS_GRAFOOS_H

#include "ListaVertice.h"
#include "Verticito.h"
#include <iostream>

using namespace std;

class Grafoos {
public:
    Grafoos();

    ListaVertice* vertices;

    void agregarVertice(string n);
    void eliminarVertice(string n);
    void eliminarArista(string origen, string destino);
    Verticito* obtenerVertice(string n);
    bool existeVertice(string n);

};


#endif //GRAFITOS_GRAFOOS_H
