/*
 * testes.cpp
 * Exercício sobre TAD lista.
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

/* NÃO MUDAR ESSSE ARQUIVO!!!*/

#include "catch_amalgamated.hpp"

#include <cstring>
#include <cstdlib>

extern "C" {
    #include "grafo.h"
}

TEST_CASE("Teste vazio") {
    grafo_t* g;
    g= grafo_cria();
    REQUIRE(grafo_vazio(g) == 1);
    REQUIRE(grafo_consulta_aresta(g, 12, 20) == 0);
    grafo_destroi(g);
}

TEST_CASE("Caso 1") {
    grafo_t* g;
    g= grafo_cria();
    REQUIRE(grafo_vazio(g) == 1);

    grafo_insere_aresta(g, 12, 20);
    REQUIRE(grafo_vazio(g) == 0);
    REQUIRE(grafo_consulta_aresta(g, 12, 20) == 1);
    REQUIRE(grafo_consulta_aresta(g, 20, 12) == 1);
    REQUIRE(grafo_consulta_aresta(g, 1, 2) == 0);

    grafo_destroi(g);
}

TEST_CASE("Caso 2") {
    grafo_t* g;
    g= grafo_cria();
    REQUIRE(grafo_vazio(g) == 1);

    grafo_insere_aresta(g, 0, 5);
    grafo_insere_aresta(g, 4, 3);
    grafo_insere_aresta(g, 0, 1);
    grafo_insere_aresta(g, 9, 12);
    grafo_insere_aresta(g, 6, 4);
    grafo_insere_aresta(g, 5, 4);
    grafo_insere_aresta(g, 0, 2);
    grafo_insere_aresta(g, 11, 12);
    grafo_insere_aresta(g, 9, 10);
    grafo_insere_aresta(g, 0, 6);
    grafo_insere_aresta(g, 7, 8);
    grafo_insere_aresta(g, 9, 11);
    grafo_insere_aresta(g, 5, 3);

    REQUIRE(grafo_consulta_aresta(g, 6, 4) == 1);
    REQUIRE(grafo_consulta_aresta(g, 10, 9) == 1);
    REQUIRE(grafo_consulta_aresta(g, 13, 20) == 0);

    grafo_destroi(g);
}
