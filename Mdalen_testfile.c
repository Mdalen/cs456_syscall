#include <stdio.h>
#include <unistd.h>
#define _GNU_SOURCE

#define __NR_cs456 349

int main(int argc, char** argv){
    /* check if the number of arguments is correct
     */
    if (argc != 2){
        printf("incorrect number of arguments!\n");
        return -1;
    }else{
        
        int diff = atoi(argv[1]);
        printf("Entering sys_cs456() with argument %d.\n", diff);
        syscall(__NR_cs456, diff);
        printf("Exiting sys_cs456().\n");
    }
    return 0;
}
