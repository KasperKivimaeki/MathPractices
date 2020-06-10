#ifndef TASKS_HEADER
#define TASKS_HEADER

#include "code011.h"
#include "code012.h"
#include "code013.h"
#include "code014.h"
#include "code016.h"
//#include "code017.h"
//#include "code018.h"
//#include "code019.h"
//#include "code020.h"
//#include "code021.h"
//#include "code025.h"
//#include "code029.h"
//#include "code030.h"
//#include "code034.h"
//#include "code039.h"
//#include "code040.h"
//#include "code043.h"
//#include "code044.h"
//#include "code045.h"
//#include "code046.h"
//#include "code047.h"
//#include "code050.h"
//#include "code661.h"

struct task {
    char id;
    long double (*solver) ();
    long double solution;
};

#define Task (struct task)

int tasks_n;
struct task* tasks;

void initTasks();
void clearTasks();

#endif
