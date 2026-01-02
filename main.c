#include <stdio.h>
#include <string.h>
#include "tarefa.h"

/*
 * Gestor de Tarefas via terminal
 * Comandos:
 *  new <prioridade> <id>
 *  list <prioridade>
 *  complete <id>
 *  exit
 */

int main() {
    char command[20];
    int priority;
    char id[ID_SIZE];

    printf("=== Gestor de Tarefas em C ===\n");

    while (1) {
        printf("\nComando: ");
        scanf("%19s", command);

        if (strcmp(command, "new") == 0) {
            scanf("%d %49s", &priority, id);
            newTask(priority, id);

        } else if (strcmp(command, "list") == 0) {
            scanf("%d", &priority);
            listTasks(priority);

        } else if (strcmp(command, "complete") == 0) {
            scanf("%49s", id);
            completeTask(id);

        } else if (strcmp(command, "exit") == 0) {
            printf("A sair do gestor de tarefas...\n");
            break;

        } else {
            printf("Comando inválido!\n");
        }
    }

    return 0;
}