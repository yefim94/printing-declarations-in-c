#include <stdio.h>
int main() {
  char name[100];
  int number;
  printf("put your full name: "); 
  scanf("%19[^\n]", name);
  printf("put your full number: "); 
  scanf("%i",&number);
  printf("your name is: %s\n your number is: %i\n", name, number);
return 0;
}