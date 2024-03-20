/*
 * tarefa.h - definição e declaração da tarefa 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

// Definição da estrutura de uma tarefa
typedef struct {
    char id[50];
    int priority;
    int completed;
} Task;

// Lista de tarefas
Task tasks[MAX_TASKS];
int numTasks = 0;


// Função para inserir uma nova tarefa
void newTask(int priority, char *id);

// Função para listar tarefas com prioridade igual ou superior
void listTasks(int priority); 

// Função para marcar uma tarefa como concluída
void completeTask(char *id);
 
