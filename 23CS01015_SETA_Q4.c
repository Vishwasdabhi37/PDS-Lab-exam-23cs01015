#include <stdio.h>
// making a function to check prime numbers
int isPrime(int a)
{
    int i;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i != 0)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number : ");
    // scaning the number
    scanf("%d", &num);
    int check = 1;
    for (int i = 1; i <= num / 2; i++)
    {
        // checking if i and num - i is prime,if yes then printing them
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d + %d = %d\n", i, num - i, num);
            check = 0;
        }
    }
    if (check)
    {
        printf("Given number can not be written as sum of two prime numbers.\n");
    }

    return 0;
}