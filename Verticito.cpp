//
// Created by xblao on 15/11/2017.
//

#include "Verticito.h"

Verticito::Verticito(string n) {
    nombre=n;
    sig=NULL;
}

ListaArista* Verticito::obtenerAristas() {
    return aristas;
}

Aristita * Verticito::obtenerArista(string destino) {
    Aristita* tmp=aristas->inicio;
    for(int i=0;i<aristas->cant;i++){
        if(tmp->destino==destino){
            return tmp;
        }else{
            tmp=tmp->sig;
        }
    }
    return NULL;
}

void Verticito::agregarArista(string origen, string dest, int peso) {
    if(obtenerArista(dest)!=NULL){
        cout<<"Ya existe"<<endl;
    }else{
        aristas->agregar(new Aristita(origen, dest, peso));
    }
}

void Verticito::agregarArista(Aristita *ari) {
    agregarArista(ari->origen, ari->destino, ari->peso);
}

void Verticito::agregarArista(Verticito *origen, Verticito *dest, int peso) {
    agregarArista(origen->nombre, dest->nombre, peso);
}
