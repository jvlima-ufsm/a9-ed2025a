/*
 * grafo.c
 * Implementação da TAD grafo_t.
 *
 * The MIT License (MIT)
 * 
 * Copyright (c) 2025 João Vicente, UFSM
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>

#include "grafo.h"


/* cria um grafo vazio */
grafo_t* grafo_cria(void)
{
    /* TODO */
    return NULL;
}


/* Retorna 1 se o grafo esta vazio, 1 caso contrario */
int grafo_vazio(grafo_t* g)
{
    return 1;
}

/*
 * Insere uma aresta entre os vértices v1 e v2. 
 */
void grafo_insere_aresta(grafo_t* g, int v1, int v2)
{
    /* TODO */
}

/* Verifica se ha uma aresta entre v1 e v2 
 * Retorna 1 quando existir, 0 caso contrario
*/
int grafo_consulta_aresta(grafo_t* g, int v1, int v2)
{
    /* TODO */
    return 0;
}

/* destroi e libera memória de um grafo */
void grafo_destroi(grafo_t* g)
{
    /* TODO */
}