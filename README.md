# Gestor de Tarefas em C

Este projeto consiste num gestor de tarefas simples em linguagem C, executado via terminal.
O programa permite ao utilizador adicionar tarefas, listar tarefas por prioridade e marcar tarefas como concluídas, utilizando comandos de texto.

O sistema foi desenvolvido com o objetivo de praticar conceitos fundamentais da linguagem C, como estruturas (struct), funções, arrays e manipulação de strings.

## Funcionalidades

Adicionar tarefas - 
Permite adicionar novas tarefas informando um identificador (id) e um nível de prioridade.

Listar tarefas por prioridade - 
Lista todas as tarefas não concluídas com prioridade igual ou superior à indicada.

Marcar tarefas como concluídas - 
Permite marcar uma tarefa como concluída através do seu identificador.

## Estrutura do Projeto

main.c — Contém a função principal e o processamento dos comandos do utilizador.

tarefa.c — Implementação das funções relacionadas às tarefas.

tarefa.h — Definição da estrutura Task e declaração das funções.

## Comandos Disponíveis

No terminal, o utilizador pode inserir os seguintes comandos:

new <prioridade> <id>
→ Adiciona uma nova tarefa.

list <prioridade>
→ Lista tarefas com prioridade igual ou superior à indicada.

complete <id>
→ Marca a tarefa com o identificador indicado como concluída.

Exemplo de Uso

```bash
   Comando: new 3 tarefa1
   Nova tarefa adicionada com sucesso!
   
   Comando: new 5 tarefa2
   Nova tarefa adicionada com sucesso!
   
   Comando: list 3
   ID: tarefa2 | Prioridade: 5
   ID: tarefa1 | Prioridade: 3
   
   Comando: complete tarefa1
   Tarefa tarefa1 marcada como concluída.
   ```

## Compilação e Execução

Para compilar o programa, utilize um compilador C como o gcc:

```bash
   gcc main.c tarefa.c -o gestor_tarefas
   ```

Para executar:

```bash
   ./gestor_tarefas
   ```

## Observações

As tarefas são armazenadas apenas em memória (não há persistência em ficheiro).

O programa continua em execução até ser encerrado manualmente.

Desenvolvido por Otilia Marques 💙
Ano: 2023
