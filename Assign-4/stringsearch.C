/*
Write a program to read a string and search a specified word in given string. 
*/


#include <stdio.h>
#include <string.h>
 
int match(char [], char []);
 
int main() {
  char a[100], b[100];
  int position;
 
  printf("Enter some text\n");
  gets(a);
 
  printf("Enter a string to find\n");
  gets(b);
 
  position = match(a, b);
 
  if(position != -1) {
    printf("Found at location %d\n", position + 1);
  }
  else {
    printf("Not found.\n");
  }
 
  return 0;
}