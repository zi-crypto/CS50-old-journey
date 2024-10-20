#include <stdio.h>
#include <cs50.h>

// 2! = 2 x 1!
// 3! = 3 x 2!
// 4! = 4 x 3!
// n! = n * (n-1)!

int fact(int num);

int main(void)
{
    int num;
    do{
        num = get_int("Factorial: ");
    } while (num <= 1);
    printf("%i\n", fact(num));
}

int fact(int num)
{
    // Base Case
    if (num == 1)
    {
        return 1;
    }

    // Recursive Case
    return num * fact(num - 1);
}