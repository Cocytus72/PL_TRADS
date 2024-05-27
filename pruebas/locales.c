#include <stdio.h>

int var_global;
int test;
main () 
{
    int var_local;
    int test;
    printf("Este texto no se imprime", var_global);
    puts("");
    printf("Este texto no se imprime", var_local);
    puts("");
    var_global = 5;
    var_local = 20;
    printf("Este texto no se imprime", var_global);
    puts("");
    printf("Este texto no se imprime", var_local);
    puts("");
    test = var_global + var_local;
    puts("La suma de la variable local y la global es:");
    printf("Este texto no se imprime", test);
    
//    system ("pause") ;
}
//@ (main)
