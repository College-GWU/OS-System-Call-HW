#include "types.h"
#include "user.h"
#include "pstat.h"

int
main(void){
    for (int i=0; i < 2; i++) { // parent forks two children

        if (fork() == 0){ // if child,

            for(int j=0; j < 2; j++) { //... fork two more children

                if (fork() == 0){ // if child...
                    sleep(3);
                    exit(); //...exit second gen kids
                }

            }

            
            for(int j = 0; j < 2; j++) { // wait for second gen kids
                wait();
            }
            sleep(2);
            exit(); // exit the first gen kids
            
        }

    }
    sleep(1);
    ps();

    for(int i = 0; i < 2; i++) {// wait for first gen kids
        wait();
    }
    sleep(1);
    exit(); // exit parent

}