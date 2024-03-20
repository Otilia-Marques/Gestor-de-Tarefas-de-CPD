/*
 * tarefa.h - defini��o e declara��o da tarefa 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

// Defini��o da estrutura de uma tarefa
typedef struct {
    char id[50];
    int priority;
    int completed;
} Task;

// Lista de tarefas
Task tasks[MAX_TASKS];
int numTasks = 0;


// Fun��o para inserir uma nova tarefa
void newTask(int priority, char *id);

// Fun��o para listar tarefas com prioridade igual ou superior
void listTasks(int priority); 

// Fun��o para marcar uma tarefa como conclu�da
void completeTask(char *id);
 
