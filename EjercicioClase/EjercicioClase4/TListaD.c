//
// Created by Alejandro Garau Madrigal on 11/03/2018.
//


#include <stdlib.h>
#include <stdio.h>
#include "TListaD.h"
/*
 *  Definir una biblioteca para gestión de una lista dinámica de enteros con las operaciones habituales:
 *  Crear, Mostrar, Insertar por el principio, Insertar por el final, Insertar ordenado,
 *  Eliminar un elemento, Destruir (Segundo ejemplo de manejo de listas dinámicas):
 */

void crear(T_ListaD* lista){
    *lista = calloc(sizeof(struct T_NodoD), 1);
}

void mostrar(T_ListaD lista){
    while(lista != NULL){
        printf("%d ", lista->num);
        lista = lista->sig;
    }
    printf("\n");
}

void destruir(T_ListaD* lista){
    T_ListaD actual = *lista;
    T_ListaD siguiente;
    while(actual != NULL){
        siguiente = actual->sig;
        free(actual);
        actual = siguiente;
    }
}

void insertar_principio(T_ListaD* lista, unsigned elem){

}

void insertar_final(T_ListaD* lista, unsigned elem){

}

void insertar_ordenado(T_ListaD* lista, unsigned elem){

}

void eliminar_elemento(T_ListaD* lista, unsigned elem){

}