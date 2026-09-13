#include <stdio.h>

int main() {
 /* int auth = 1;
 if (auth) {
  printf("Your procced\n");
 } else {
  printf("your can't procced\n");
 } */
 
 int integer = 99;
 
 if (integer==99) {
  printf("is 99\n");
 } else if (integer==100) {
  printf("is 100\n");
 } else {
  printf("don't is 99 and 100\n");
 }

 // switch only char y int
 char color = 'V';
 switch (color) {
  case 'V':
   printf("Succes!!\n");
   break;
  case 'A':
   printf("Warning!\n");
   break;
  default:
   printf("Eror 404\n");
   break;
 }

 return 0;
}
