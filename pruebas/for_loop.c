#include <stdio.h>

main () 
{
    int var1;
    puts("Antes del for: ");
    printf("Este texto no se imprime", var1);
    for (var1=10;var1 != 20;var1=var1 + 1){
        puts("Dentro del for: ");
        printf("Este texto no se imprime", var1);
    }
    puts("Despues del for: ");
    printf("Este texto no se imprime", var1);
    
//    system ("pause") ;
}

//@ (main)
