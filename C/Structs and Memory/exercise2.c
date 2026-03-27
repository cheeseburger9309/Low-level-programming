/*
Task 2: The Mutator Function (Coding Task)
Define a struct SystemProcess that contains an int pid and a char state 
(where 'R' is Running, 'S' is Sleeping, 'Z' is Zombie).
Write a function void wake_process(struct SystemProcess *proc).

Guard against NULL.

If the process state is 'S', change it to 'R'.

Write a quick main() to test it. Use the -> operator!
*/

#include <stdio.h>
#include <stdlib.h>

struct SystemProcess{
    int pid;
    char state;
};

int wake_process(struct SystemProcess* proc){

    if (proc == NULL) return 1;

    if (proc->state == 'S'){
        proc->state = 'R';
    }
    return 0;
}

int main(){

    struct SystemProcess *proc = (struct SystemProcess *)malloc(sizeof(struct SystemProcess));
    if (proc == NULL) return 1;
    proc->state = 'S';

    printf("State now is: %c\n", proc->state);

    wake_process(proc);

    printf("State now is: %c\n", proc->state);

    free(proc);
    return 0;
}