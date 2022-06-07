//
// Created by shawm on 07-06-2022.
//
/*
#include <stdio.h>
#include <stdlib.h>

int isSum(int a, int b){
    return a+b;
}
int main(int argc, char *argv[]){

    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int result = isSum(a,b);
    printf("%d",result);
    return EXIT_SUCCESS;
}
*/

#include <stdio.h>
#include <stdlib.h>
/*
int main(int argc, char *argv[]){

    //int a =atoi(argv[1]);
   // float a =atoi(argv[1]);
  // int a = atof(argv[1]);
   //char *s = argv[1];
   // printf("%d",a);

//   char *a="gjgjgjs";
//    printf("%s",a);
}*/

#include <stdio.h>
#include <stdlib.h>

   char *twoArgs(char *a){
          return a;

}
int main(int argc, char *argv[])
{

    char *n1 = argv[1];
    //char *n2 = argv[2];

    char *res = twoArgs(n1);
    printf("%s",res);
    return EXIT_SUCCESS;


}