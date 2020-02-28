#include <signal.h>
#include <stdlib.h>
#include <stdio.h>


void 
handle_interrupt(int s)
{
        printf("interrupted!\n");
        exit(0);
}

int
main (int argc, char **argv)
{
        struct sigaction intr_action;
        intr_action.sa_handler = handle_interrupt;

        sigaction(SIGINT, &intr_action, NULL);
        while (1) { }
}
