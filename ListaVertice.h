//
// Created by xblao on 23/11/2017.
//

#ifndef GRAFITOS_LISTAVERTICE_H
#define GRAFITOS_LISTAVERTICE_H

#include "ListaArista.h"
#include "Verticito.h"

class ListaVertice {
public:
    ListaVertice();

    ListaArista* aristas;
    Verticito* inicio;
    Verticito* final;
    int cant;

    void agregar(Verticito* agg);
    void eliminar(Verticito* elim);
};


#endif //GRAFITOS_LISTAVERTICE_H
