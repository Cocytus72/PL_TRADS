#include <stdio.h>

test (int var2) 
{
    var2 = 4 * 3;
    printf("Este texto no se imprime", var2,"Modifico el valor de var1 en Test!!!");
    var2 = var2 *5;
    printf("Este texto no se imprime", var2,"Modifico el valor de var1 en Test!!!");
    return var2;
    
//    system ("pause") ;
}


main () 
{
    int var1;
    int result;
    var1 = 2;
    printf("Este texto no se imprime", var1,"Estoy en Main!!!");
    result=test(var1);
    printf("Este texto no se imprime",result, "El resultado de test");
    
//    system ("pause") ;
}

//@ (main)
