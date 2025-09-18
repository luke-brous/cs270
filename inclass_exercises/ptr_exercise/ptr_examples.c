#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *p, x = 10;

  p = &x; // p holds address of x

  printf("Address of x: %25p\n", &x);         // prints memory address (in hexadecimal format)
  printf("Address stored in p: %18p\n\n", p); // prints memory address (in hexadecimal format)
  printf("Dereferencing p: %10d\n", *p);      // prints value stored at memory address
  *p = 20;
  printf("New value for x: %10d\n", x);
  printf("Dereferencing p: %10d\n\n", *p);    // prints new value stored at memory address

  p = (int *) malloc(sizeof(int));          // dynamically allocate space for one int
  
  // important to check return result here!
  if (p == NULL) exit(-1); // error return
  
  *p = 100;
  printf("Address stored in p: %18p\n", p);        // prints memory address (in hexadecimal format)
  printf("Value stored at address: %1d\n\n", *p); // prints value at memory address

  free(p);
}