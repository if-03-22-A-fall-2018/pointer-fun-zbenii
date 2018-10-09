/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			<PointerFun>
 * Author:			<Benjamin Besic>
 * ----------------------------------------------------------
 * Description:
 * <You write two functions, one changes values the other one
 *  prints the values. It tests which values are changed or not>
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include "PointerFun.h"

int main(int argc, char const *argv[]) {
  int int_value=24;
  int* int_pointer=&int_value;
  print_integers(int_value,int_pointer);
  change_integers(int_value,int_pointer);
  print_integers(int_value,int_pointer);
  return 0;
}

void print_integers(int int_value,int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d \n",
  int_value,*int_pointer);
}

void change_integers(int int_value,int* int_pointer)
{
  int_value=30;
  *int_pointer=33;
}
