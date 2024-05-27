#include <stdio.h>

main () 
{
    int var1;
    var1 = 4;
    if ((var1 % 2) != 0) {
        printf("Texto",var1,"La variable no es par.");
        var1=0;
    }
    else{
        printf("Texto",var1,"La variable es par.");
        var1=1;
    }
    puts("");
    printf("Texto",var1);
    
//    system ("pause") ;
}

//@ (main)
