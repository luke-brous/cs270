#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *p, x = 10;

  // Note: missing initialization of p
  p = &x; 

  printf("%p", p);  // prints memory address
  printf(" contains %d\n", *p);  // prints value at memory address

  p = (int *) malloc(sizeof(int));
  *p = 10;
  printf("%p", p);  // prints memory address
  printf(" contains %d\n", *p);  // prints value at memory address

//   free(p);

  // p is no longer allocated, we shouldn't use it!
  // What happens if we do???

  printf("%p", p);  // prints memory address
  printf(" contains %d\n", *p);  // prints value at memory address  
 
}