//Write a Program to Convert Binary to Decimal.

#include<stdio.h>

int main()
{
    int binary , decimal = 0 , base = 1;
    printf("Enter the binary number : ");
    scanf("%d", &binary);

    int temp = binary;

    while (temp)
    {
        int last_digit = temp % 10; //EXTRACT THE LAST DIGIT
        temp = temp / 10;

        decimal += last_digit * base; //MULTIPLYING THE LAST DIGIT TO THE BASE VALUE AND ADDING IT TO DECIMAL

        base = base * 2; //updating the base value 
    }

    printf("The decimal value is : %d" , decimal);
    

    return 0;
}