//
// Created by shawm on 09-06-2022.
//
// C program to show the use of puts
/*#include <stdio.h>
int main()
{
    puts("Geeksfor");
    puts("Geeks");

    getchar();
    return 0;
}*/

/*// C program to show the use of fputs and getchar
#include <stdio.h>
int main()
{
    fputs("Geeksfor", stdout);
    fputs("Geeks", stdout);

    getchar();
    return 0;
}*/

// C program to show the side effect of using
// %s in printf
/*#include <stdio.h>
int main()
{
    // % is intentionally put here to show side effects of
    // using printf(str)
    printf("Geek%sforGeek%s");
    getchar();
    return 0;
}*/


// C program to show the use of puts
/*#include <stdio.h>
int main()
{
    puts("Geek%sforGeek%s");
    getchar();
    return 0;
}*/

/*#include<stdio.h>

//The above program prints “geeks for geeks 10”. The first printf() prints “geeks for geeks”. The second printf() prints 10 as there are 10 characters printed (the 10 characters are “geeks for “) before %n in first printf() and c is set to 10 by first printf().
int main()
{
    int c;
    printf("geeks for %ngeeks ", &c);
    printf("%d", c);
    getchar();
    return 0;
}*/

/* Program to print %*/
#include<stdio.h>
/* Program to print %*/
int main()
{
    printf("%");
    getchar();
    return 0;
}
