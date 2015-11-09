/* 
 * File:   enemigo.h
 * Author: jenisse
 *
 * Created on 8 de noviembre de 2015, 12:12 PM
 */

#ifndef ENEMIGO_H
#define	ENEMIGO_H

typedef struct enemigo{
    char *nombre;
    int ataque;
    int defensa;
    int experiencia;
    struct enemigo *sig;
}TEnemigo;

typedef struct listaEnemigo{
    TEnemigo *cabeza;
    int total;
}TListaEnemigo;

/*Crea un nodo del tipo Enemigo*/
void crearEnemigo(TEnemigo *, char *, int, int, int );

/* Crea una lista vacía */
void crearListaEnemigo(TListaEnemigo *);

/* Libera la memoria ocupada por todos los elmentos de la lista */
void freeListaEnemigo(TListaEnemigo *);

/* Inserta un nuevo elemento en la lista */
void insertarEnemigo(TListaEnemigo *, TEnemigo);

/* Verifica si la lista está vacía */
int listaEnemigoVacia(TListaEnemigo *);

/* Elimina un elemento de la lista */
void eliminarEnemigoEnLista(TListaEnemigo *, TEnemigo);

/* Obtiene el número de elementos de la lista*/
int tamanoListaEnemigo(TListaEnemigo *);

/* Verifica si un elemento está en la lista */
int enemigoEnLista(TListaEnemigo *, TEnemigo);

/* Imprime los elementos de la lista */
void imprimirListaEnemigo(TListaEnemigo *);


#endif	/* ENEMIGO_H */

