/*
 * main.c -- main program function
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"

#define MAX_TASKS 100

/*
 *Este programa implementa um gestor de tarefas pessoais. 
 *Possui funções para adicionar novas tarefas, listar tarefas com uma prioridade específica ou superior, 
 *e marcar tarefas como concluídas. 
 *O programa continua em execução até que o comando 'exit' seja inserido 
*/

int main(int argc, char *argv[])
{
    char command[20];
    int priority;
    char id[50];

    while (1) {
        printf("\nComando: ");
        scanf("%s", command);

        if (strcmp(command, "new") == 0) {
            scanf("%d %s", &priority, id);
            newTask(priority, id);
        } else if (strcmp(command, "list") == 0) {
            scanf("%d", &priority);
            listTasks(priority);
        } else if (strcmp(command, "complete") == 0) {
            scanf("%s", id);
            completeTask(id);
        } else {
            printf("Comando inválido!\n");
        }
    }

    return 0;
}


