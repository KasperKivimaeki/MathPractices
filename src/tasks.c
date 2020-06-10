#include "tasks.h"

void initTasks() {
    int n = 5;
    tasks = malloc(sizeof(struct task)*n);
    
    int i = 0;
    tasks[i].id = 11;
    tasks[i].solver = solve011;
    i++;
    tasks[i].id = 12;
    tasks[i].solver = solve012;
    i++;
    tasks[i].id = 13;
    tasks[i].solver = solve013;
    i++;
    tasks[i].id = 14;
    tasks[i].solver = solve014;
    i++;
    tasks[i].id = 16;
    tasks[i].solver = solve016;
    i++;

    tasks_n = n;
}

void clearTasks() {
    free(tasks);
}
