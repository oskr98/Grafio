//
// Created by xblao on 23/11/2017.
//

#include "ListaVertice.h"

ListaVertice::ListaVertice() {
    inicio=NULL;
    final=NULL;
    cant=0;
}

void ListaVertice::agregar(Verticito *agg) {
    if(inicio == NULL)
    {
        inicio = agg;
        final = agg;
    }
    else
    {
        final->sig = agg;
        final = final->sig;
    }
    cant++;
}

void ListaVertice::eliminar(Verticito *elim) {
    Verticito* temp = inicio;
    Verticito* temp1 = inicio->sig;

    int cont = 0;

    if (inicio->nombre == elim->nombre) {
        inicio = temp->sig;
    } else {
        while (temp1) {
            if (temp1->nombre == elim->nombre) {
                Verticito *aux_node = temp1;
                temp->sig = temp1->sig;
                delete aux_node;
                cont++;
                cant--;
            }
            temp = temp->sig;
            temp1 = temp1->sig;
        }
    }

    if (cont == 0) {
        cout << "No existe el dato " << endl;
    }
}


