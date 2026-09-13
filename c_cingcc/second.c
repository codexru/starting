#include <stdio.h>

int main() {
 // match
 printf("\nmatch\n");
 printf("%d\n", 1+1);
 printf("%d\n", 1-1);
 printf("%d\n", 10*2);
 printf("%d\n",10/2);

 // comparation
 printf("\ncomparations\n");
 printf("%d\n",4==4);
 printf("%d\n",4=='4');
 printf("%d\n",4!=5);
 printf("%d\n",4<=5);
 printf("%d\n",4>=5);

 // logic
 printf("\n logic \n");
 printf(" Y or ^\n");
 printf("%d\n",1&&1);
 printf("%d\n",1&&0);
 printf("%d\n",0&&1);
 printf("%d\n",0&&0);
 
 printf("\n O  \n");
 printf("%d\n",1||1);
 printf("%d\n",1||0);
 printf("%d\n",0||1);
 printf("%d\n",0||0);
 return 0;
}
