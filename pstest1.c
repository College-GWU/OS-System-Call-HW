#include "types.h"
#include "user.h"
#include "pstat.h"

int
main(void) 
{
    for(int i = 0; i < 8; i++) {
        if(fork() == 0)
            exit();
    }

    ps();

    for(int i = 0; i < 8; i++) {
        wait();
    }

    exit();
}