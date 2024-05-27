#include <stdio.h>

test (int num1,int num2, int num3) 
{
    int suma;
    int resto;
    suma = num1 + num2 + num3;
    resto = suma % 3;
    printf("Texto",resto,"El resto de los 3 numeros introducidos es ");
    if ((resto % 2) != 0) {
        printf("Texto",resto,"Resto no es par.");
        return resto;
    }
    else{
        printf("Texto",resto,"Resto es par, devuelvo la suma");
        return suma;
    }
    
//    system ("pause") ;
}


main () 
{
    int var1;
    int result;
    var1 = 2;
    printf("Este texto no se imprime", var1,"Estoy en Main!!!");
    result=test(4,var1,20);
    printf("Este texto no se imprime", result,"El resultado de test es " );
    
//    system ("pause") ;
}

//@ (main)
