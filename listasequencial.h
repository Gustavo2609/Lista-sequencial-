//
// Created by danie on 31/08/2021.
//

#ifndef LISTA_SEQUENCIAL_LISTASEQUENCIAL_H
#define LISTA_SEQUENCIAL_LISTASEQUENCIAL_H
#define TAM_LISTA 100
typedef int TIPO_DADO;

typedef enum
{
  ERRO_SUCESSO,
  ERRO_POSICAO_INVALIDA,
  ERRO_LISTA_CHEIA,
  ERRO_LISTA_VAZIA,
  ERRO_CHAVE_INEXISTENTE
} ERRO_LISTA;

typedef struct st_lista {
  TIPO_DADO nodos[TAM_LISTA];
  unsigned int tamanho;
} LISTA;

int lista_inicializar(LISTA* lista);
unsigned int lista_tamanho(const LISTA* lista);
int lista_inserir(LISTA *lista, TIPO_DADO dado, unsigned int posicao);
int lista_remover(LISTA *lista, unsigned int posicao, TIPO_DADO *dado);
int lista_inserir_ordenado(LISTA *lista, TIPO_DADO dado);
int lista_buscar(const LISTA *lista, TIPO_DADO dado, unsigned int *posicao); // nao ordenada
int lista_ordenada_buscar(const LISTA *lista, TIPO_DADO dado, unsigned int *posicao); // ordenada
// Buscar

void lista_imprimir(const LISTA* lista);


#endif //LISTA_SEQUENCIAL_LISTASEQUENCIAL_H
