#include <stdio.h>
// defining the factorial function
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
        return num * factorial(num - 1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    // scanning the value of the number
    scanf("%d", &num);
    int temp = num;
    // counting the number of digits
    int count = 0;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    // storing the digits in the array
    int digits[count];
    temp = num;
    int i = 0;
    while (temp)
    {
        digits[i] = temp % 10;
        temp /= 10;
        i++;
    }
    // checking the sum of the factorial of the digits
    int sum = 0;
    for (int j = 0; j < i; j++)
    {
        sum += factorial(digits[j]);
    }
    //if sum of the factorial of digits is equal to the number then it is a strong number
    if (sum == num)
    {
        printf("Given number is a strong number.\n");
    }
    //if sum of the factorial of digits is not equal to the number then it is not a strong number
    else
        printf("Given number is not a strong number.\n");

    return 0;
}