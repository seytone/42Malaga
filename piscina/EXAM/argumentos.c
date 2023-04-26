#include <stdio.h>

int main(int argc, char **argv[])
{
    int n;

    n = 0;
    
    printf("%s\n", argc);
    
    while(argv[n] != "\n")
    {
        n++;
    }
    
    printf("%s\n", argc);
}