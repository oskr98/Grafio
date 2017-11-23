//
// Created by xblao on 15/11/2017.
//

#include "ListaArista.h"

ListaArista::ListaArista() {
    inicio=NULL;
    final=NULL;
    cant=0;
}

void ListaArista::agregar(Aristita* agg) {
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

void ListaArista::eliminar(Aristita* elim) {
    Aristita* temp = inicio;
    Aristita* temp1 = inicio->sig;

    int cont = 0;

    if (inicio->destino == elim->destino) {
        inicio = temp->sig;
    } else {
        while (temp1) {
            if (temp1->destino == elim->destino) {
                Aristita *aux_node = temp1;
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

