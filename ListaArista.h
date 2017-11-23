//
// Created by xblao on 15/11/2017.
//

#ifndef GRAFITOS_LISTAADYACENTE_H
#define GRAFITOS_LISTAADYACENTE_H

#include "Aristita.h"

class ListaArista {
public:
    ListaArista();

    Aristita* inicio;
    Aristita* final;
    int cant;

    void agregar(Aristita* agg);
    void eliminar(Aristita* elim);
};


#endif //GRAFITOS_LISTAADYACENTE_H
