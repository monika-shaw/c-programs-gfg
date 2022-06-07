//
// Created by shawm on 07-06-2022.
//
/*#include <stdio.h>
#define max 100
int main()
{
    printf("max is %d", max);
    return 0;
}*/

/*#include <stdio.h>
#define INCREMENT(x) x+1
int main()
{
    char *ptr = "GeeksQuiz";
    int x = 10;
    printf("%s ", INCREMENT(ptr));
    printf("%d", INCREMENT(x));
    return 0;
}*/

/*#include <stdio.h>
#define merge(a, b) a##b
int main() { printf("%d ", merge(12, 34)); }*/

#include <stdio.h>

int main()
{
    printf("Current File :%s\n", __FILE__);
    printf("Current Date :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Line Number :%d\n", __LINE__);
    return 0;
}

