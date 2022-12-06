#include<stdio.h>
#include<conio.h>

int increment(int x)
{
    return x + 2;   //x will be 1
}

int main(void)
{
    printf("  %d\n",  increment(1) );

    return 0;
}