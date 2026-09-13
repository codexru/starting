#include <stdio.h>
/* int main1() {
    // Hello world in c but level 1
    printf("Hello World\n");
    return 0;
   } */

/* int main() {
    // char is for 1 character, if have 1 more character in your variable terminate in []
    // this is char not number o another data type
    char charac = 'c';
    char book[] = "data type string in python xd, but in c is char of character";
    char number[] = "750-3089 13786";
    char color[] = "yellow";
    int num_int = 100;
    float num_flt = 3.14;
    int bool_false = 0;
    int bool_true = 1;
    printf("%c\n",charac);
    // for char is %s of "s"tring s-tring 
    printf("%s\n",book);
    printf("%s\n",number);
    printf("%s\n",color);
    // for number interger is %d of int 
    printf("%d\n",num_int);
    // for number float is %f of float lit
    printf("%f\n",num_flt);
    // for True = 1 or False = 0
    printf("%d\n",bool_false);
    printf("%d\n",bool_true);
    return 0;
   } */

int main() {
 // list of char or string
 char *animals[] = {"duck", "pinguin", "cat", "python", "dog"};
 printf("%s\n", animals[0]);
 printf("%s\n", animals[1]);
 printf("%s\n", animals[2]);
 printf("%s\n", animals[3]);
 printf("%s\n", animals[4]);

 // list of numbers
 int numbers[] = {1, 2, 3, 4, 5};
 printf("%d\n",numbers[0]);
 printf("%d\n",numbers[1]);
 printf("%d\n",numbers[2]);
 printf("%d\n",numbers[3]);
 printf("%d\n",numbers[4]);


 // constant
 /* float pi = 3.14;
    pi = 3.12;
 printf("%f\n",pi); */
 const float pi = 3.19;
 // pi = 3.67;
 printf("%f\n",pi);
 

 return 0;
}
