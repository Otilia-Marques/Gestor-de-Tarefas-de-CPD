#include "tarefa.h"
#include <string.h>

// Definição das variáveis globais
Task tasks[MAX_TASKS];
int numTasks = 0;

// Inserir nova tarefa
void newTask(int priority, char *id) {
    if (numTasks >= MAX_TASKS) {
        printf("Limite máximo de tarefas atingido!\n");
        return;
    }

    if (priority < 1 || priority > MAX_PRIORITY) {
        printf("Prioridade inválida! Use valores entre 1 e %d.\n", MAX_PRIORITY);
        return;
    }

    strcpy(tasks[numTasks].id, id);
    tasks[numTasks].priority = priority;
    tasks[numTasks].completed = 0;
    numTasks++;

    printf("Nova tarefa adicionada com sucesso!\n");
}

// Listar tarefas não concluídas por prioridade
void listTasks(int priority) {
    int i, j;

    printf("Tarefas com prioridade %d ou superior:\n", priority);
    printf("------------------------------------------\n");

    for (i = MAX_PRIORITY; i >= priority; i--) {
        for (j = 0; j < numTasks; j++) {
            if (tasks[j].priority == i && tasks[j].completed == 0) {
                printf("ID: %s | Prioridade: %d\n",
                       tasks[j].id, tasks[j].priority);
            }
        }
    }

    printf("------------------------------------------\n");
}

// Marcar tarefa como concluída
void completeTask(char *id) {
    int i;

    for (i = 0; i < numTasks; i++) {
        if (strcmp(tasks[i].id, id) == 0 && tasks[i].completed == 0) {
            tasks[i].completed = 1;
            printf("Tarefa '%s' marcada como concluída.\n", id);
            return;
        }
    }

    printf("Tarefa inexistente ou já concluída.\n");
}
