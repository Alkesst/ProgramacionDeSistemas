//
// Created by Alejandro Garau Madrigal on 11/03/2018.
//

#ifndef __LISTA_D__
#define __LISTA_D__

typedef struct T_NodoD* T_ListaD;

/*
 *  Definir una biblioteca para gestión de una lista dinámica de enteros con las operaciones habituales:
 *  Crear, Mostrar, Insertar por el principio, Insertar por el final, Insertar ordenado,
 *  Eliminar un elemento, Destruir (Segundo ejemplo de manejo de listas dinámicas):
 *
 */

struct T_NodoD{
    unsigned num;
    T_ListaD sig;
};

void crear(T_ListaD* lista);
void mostrar(T_ListaD lista);
void destruir(T_ListaD* lista);
void insertar_principio(T_ListaD* lista, unsigned elem);
void insertar_final(T_ListaD* lista, unsigned elem);
void insertar_ordenado(T_ListaD* lista, unsigned elem);
void eliminar_elemento(T_ListaD* lista, unsigned elem);

#endif //__LISTA_D__
