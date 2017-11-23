//
// Created by xblao on 15/11/2017.
//

#include "Grafoo.h"

void Grafoos::agregarVertice(string n) {
    if(existeVertice(n)){
        cout<<"Ya existe"<<endl;
    }else{
        vertices->agregar(new Verticito(n));
    }
}

void Grafoos::eliminarVertice(string n) {
    if(existeVertice(n)){
        vertices->eliminar(obtenerVertice(n));
    }else{
        cout<<"No existe"<<endl;
    }
}

void Grafoos::eliminarArista(string origen, string destino) {
    Verticito* ori = obtenerVertice(origen);
    Verticito* dest = obtenerVertice(destino);
    Aristita* aristaElim = ori->obtenerArista(destino);
    if(existeVertice(origen) && existeVertice(destino)){
        ori->aristas->eliminar(aristaElim);
    }else{
        cout<<"No existe arista"<<endl;
    }
}

Verticito *Grafoos::obtenerVertice(string n) {
    Verticito* tmp= vertices->inicio;
    for (int i=0; i<vertices->cant; i++){
        if(tmp->nombre==n){
            return tmp;
        }else{
            tmp=tmp->sig;
        }
    }
    return NULL;
}

bool Grafoos::existeVertice(string n) {
    Verticito* tmp=obtenerVertice(n);
    if(tmp!=NULL){
        return true;
    }else{
        return false;
    }
}
