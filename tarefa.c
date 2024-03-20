/*
 * tarefa.c - implementação das funções da tarefa 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tarefa.h"


// Função para inserir uma nova tarefa
void newTask(int priority, char *id) {
    if (numTasks >= MAX_TASKS) {
        printf("Limite máximo de tarefas atingido!\n");
        return;
    }

    strcpy(tasks[numTasks].id, id);
    tasks[numTasks].priority = priority;
    tasks[numTasks].completed = 0;
    numTasks++;

    printf("Nova tarefa adicionada com sucesso!\n");
}

// Função para listar tarefas com prioridade igual ou superior
void listTasks(int priority) {
    printf("Tarefas com prioridade %d ou superior:\n", priority);
    printf("------------------------------------------\n");

    int i, j;
    for (i = 5; i >= priority; i--) {
        for (j = 0; j < numTasks; j++) {
            if (tasks[j].priority == i && tasks[j].completed == 0) {
                printf("ID: %s | Prioridade: %d\n", tasks[j].id, tasks[j].priority);
            }
        }
    }

    printf("------------------------------------------\n");
}

// Função para marcar uma tarefa como concluída
void completeTask(char *id) {
    int i;
    for (i = 0; i < numTasks; i++) {
        if (strcmp(tasks[i].id, id) == 0 && tasks[i].completed == 0) {
            tasks[i].completed = 1;
            printf("Tarefa %s marcada como concluída.\n", id);
            return;
        }
    }
    printf("TAREFA INEXISTENTE\n");
}

