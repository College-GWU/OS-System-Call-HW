#include "types.h"
#include "user.h"
#include "pstat.h"


int
main(void){
  if (fork() == 0){
    if (fork() == 0){
      if (fork() == 0){
        if (fork() == 0){
          if (fork() == 0){
            if (fork() == 0){
              if (fork() == 0){
                if (fork() == 0){
                  ps();
                }
              }
            }
          }
        }
      }
    }
  }
  for (int i = 0; i < 8; i++){
    wait();
  }
  exit();
}