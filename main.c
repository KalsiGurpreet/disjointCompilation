#include<stdio.h> 

#include "factorial.h"

int main(int argc, char *argv[])
{
    long result = 0;
    int n = 0;

    printf("Please enter your 'n' value: ");
    scanf("%d", &n);
    if(n <= 0 || n > 20)
      {
        printf("Bad news: you've entered an invalid value and this computer is going to print factorial of 1 instead. Please enter value between 1 and 20.\n");
	n=1;
      }

    result = factorial(n);

    printf("Factorial of %d is %lu\n", n, result);
    return 0;
}
