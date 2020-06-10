#include <stdlib.h>
#include <stdio.h>
#include "tasks.h"

int find(int p) {
    for(int i = 0; i < tasks_n; i++) {
        if(tasks[i].id == p) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char *argv[]) {

    initTasks();

    while(argc > 1) {
        argc--;
        argv++;

        int problem = atoi(*argv);

        int index = find(problem);
        if(index == -1) continue;

        int solution = tasks[index].solver();

        printf("Problem: %d\n", problem);
        printf("Solution: %d\n", solution);
    }

    clearTasks();
    return 0;
}
