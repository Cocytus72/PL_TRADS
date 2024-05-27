# PL_TRADS

Práctica final de la asignatura de Procesadores del lenguaje, en ella se traducen archivos .c como los mostradosen pruebas.zip a LISP usando trad.y para posteriormente traducir dichos archivos LISP a FORTH usando back.y

Para ejecutar:

- De C a LISP:
  ./trad <test.c >test.l 
  clisp <test.l

- De LISP a FORTH
  back <test.l >test.f
  gforth <test.f
