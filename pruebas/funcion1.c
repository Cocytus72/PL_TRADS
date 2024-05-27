#include <stdio.h>

test () 
{
    int var2;
    var2 = 5;
    printf("Este texto no se imprime", var2,"Estoy en Test!!!");
    
//    system ("pause") ;
}


main () 
{
    int var1;
    var1 = 2;
    printf("Este texto no se imprime", var1,"Estoy en Main!!!");
    test();
    
//    system ("pause") ;
}

//@ (main)
