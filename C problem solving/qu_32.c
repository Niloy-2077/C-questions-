// C Program to Check Whether a Number Can Be Express as Sum of Two Prime Numbers
#include<stdio.h>
// Function to check prime number
int isPrime(int num)
{
    int prime = 1;

    if (num == 0 || num == 1)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i ==0)
            {
                prime = 0;
                break;
            }
        }
    }
    return prime;
}
int main()
{
    int num , flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i < num / 2; i++)
    {
        if (isPrime(i) == 1)
        {
            if (isPrime(num - i) == 1)
            {
                printf("%d Can Be Express as Sum of Two Prime Numbers\n" , num);
                return 0;
            }
        }
    }
    printf("%d Can not Be Express as Sum of Two Prime Numbers" , num);
    return 0;
}