#include <stdio.h>

main () 
{
    int var1;
    var1 = 10;
    puts("Antes del while: ");
    printf("Este texto no se imprime", var1);
    while (var1 != 20){
        var1 = var1 + 1;
    }
    puts("Despues del while: ");
    printf("Este texto no se imprime", var1);
    
//    system ("pause") ;
}

//@ (main)
