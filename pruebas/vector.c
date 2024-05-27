#include <stdio.h>

int arrayGlobal[10];

main () 
{
    int i;
    int h;
    for(i=0;i<10;i = i+1){
        arrayGlobal[i]=i+1;
    }
    for(h=0;h<10;h = h+1){
        printf("T",arrayGlobal[h]);
        puts("");
    }
    
//    system ("pause") ;
}

//@ (main)
