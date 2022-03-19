#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>


int main ()

{

printf("A");

fork();

printf("B");

fork();

printf("C");

fork();

printf("D");

return 0;

}