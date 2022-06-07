//
// Created by shawm on 07-06-2022.
//
/*#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i){
        printf("%d ", i);
        main(10);
    }
}*/

#include <stdio.h>
int main(void )
{
    static int i = 5;
    if (--i){
        printf("%d ", i);
        //main(10);
    }
}