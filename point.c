/* 
 *  point.c - example program for computing distances between 2-D coordinates
 */

/* like import, #include brings in definitions needed to use these libraries */

#include <stdio.h>     // for I/O functions like scanf, printf
#include <math.h>      // for math fucntions like sqrt

/* Type definitions come next */

int point_x, point_y;

/* Function definitions */

void readPoint() {
  printf("%s", "\nEnter x- and y-coordinates: ");
  scanf("%d %d", &point_x, &point_y);
}

double distance(int x1, int y1, int x2, int y2) {
   double result;
   int xpart, ypart;
   xpart = (x1 - x2) * (x1 - x2);
   ypart = (y1 - y2) * (y1 - y2);
   result = sqrt(xpart + ypart);
   return result;
}

void printPoint() {
  printf("Point [%d, %d]", point_x, point_y);   
}

/* 
 * All executable C programs require a main function 
 * as it always executed first;
 * this one runs a simple test of our Point functionality
 */

int main() {
  int new_x, new_y;
  
  char name[20];
  printf("Enter your first name: ");
  scanf("%19s", name);
  printf("\nHey there, %s\n", name);

  readPoint();
  printPoint();

  new_x = point_x;
  new_y = point_y;
  
  readPoint();
  printPoint();

  double dist = distance(point_x, point_y, new_x, new_y);
  printf("\nDistance = %f\n", dist);
}


