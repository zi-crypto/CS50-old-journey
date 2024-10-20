#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int steps = 0;
int main(void)
{
    int num;
    do
    {
        num = get_int("Num: ");
    } while (num <= 0);
    printf("Steps taken till 1 = %i", collatz(num));
    
}

int collatz(int n)
{

    if (n == 1)
    {
        printf("1!\n");
        return steps;
    }

    else if (n % 2 == 0)
    {
        printf("%i -> ", n);
        n = collatz(n/2);
        steps++;
    }
    else
    {
        printf("%i -> ", n);
        n = collatz((3*n)+1);
        steps++;
    }
}