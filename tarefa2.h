#ifndef TAREFA_H
#define TAREFA_H

#include <stdio.h>

#define MAX_TASKS 100
#define MAX_PRIORITY 5
#define ID_SIZE 50

// Estrutura da tarefa
typedef struct {
    char id[ID_SIZE];
    int priority;
    int completed; // 0 = não concluída, 1 = concluída
} Task;

// Declaração das variáveis globais
extern Task tasks[MAX_TASKS];
extern int numTasks;

// Declaração das funções
void newTask(int priority, char *id);
void listTasks(int priority);
void completeTask(char *id);

#endif
