#include <stdio.h>
#include <stdlib.h>
//Segundo comentario de prueba por antnundom
#include "calcfact.h"
//comentario de prueba en fact.c
int main(int argc, char **argv)
{
  int numTemp;
  
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
  numTemp=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", numTemp, calcfact(numTemp));


}
