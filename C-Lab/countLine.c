//
// Created by shawm on 16-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    char filename[100];
    puts("Enter the name of file");
    scanf("%s",filename);

    FILE *ptr;
    ptr = fopen(filename,"r");
    if(ptr == NULL)
    {
        puts("File does not exist");
        return 0;
    }
    int count = 1;
    for (c = getc(ptr); c != EOF; c = getc(ptr))
    {
        if(c =='\n')
            count++;
    }
    printf("Count is %d",count);
    fclose(ptr);

}
