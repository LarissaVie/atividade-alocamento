# Projetos em C: Exemplos de Programas

Este repositório contém exemplos de programas em C que abordam conceitos de tipos de dados, estruturas, alocação dinâmica e validação de entradas. Abaixo estão descritos os programas e suas respectivas funcionalidades.

## 1. Tamanho dos Tipos de Dados

Este programa mostra o tamanho em bytes que cada tipo de dado padrão ocupa na memória:

- `char`
- `int`
- `float`
- `double`

## 2. Estrutura Representando um Aluno

Cria uma estrutura que representa um aluno de uma disciplina. A estrutura inclui:

- Número de matrícula
- Nome
- Notas de três provas

O programa calcula e exibe o tamanho em bytes dessa estrutura.

## 3. Estrutura de Cadastro com Alocação Dinâmica

Define uma estrutura chamada `Cadastro`, que contém:

- Nome
- Idade
- Endereço

O programa inclui uma função para alocar dinamicamente um vetor dessa estrutura com base no número fornecido pelo usuário. A função também permite que o usuário insira os dados para cada entrada do vetor.

## 4. Alocação Dinâmica e Impressão de Vetor

O programa lê o tamanho de um vetor fornecido pelo usuário, aloca dinamicamente a memória para o vetor e permite ao usuário preencher os valores. Em seguida, o programa imprime os valores armazenados no vetor.

## 5. Leitura e Validação de Vetor com Alocação Dinâmica

Este programa solicita ao usuário um valor inteiro não negativo `N`. Caso o valor fornecido seja inválido (negativo), o usuário deve fornecer um novo valor até que um valor válido seja informado. Após a validação, o programa aloca dinamicamente um vetor de inteiros com `N` posições e garante que cada valor inserido seja maior ou igual a 2.


