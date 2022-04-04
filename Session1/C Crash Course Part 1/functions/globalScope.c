#include <stdio.h>
int global = 1348;
void test();
int main() {
  printf("from the main function : global =%d \n", global);
  test () ;
return 0;}

void test (){
printf("from user defined function : global =%d \n", global);}