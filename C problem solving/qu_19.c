// Write program to calculate root of a Quadratic Equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a , b, c ;
    printf("Enter the value of a , b and c: ");
    scanf("%d %d %d" , &a , &b , &c);
    
    int d = b*b - 4*a*c;
    if (d == 0)
    {
        printf("Both roots are equal!!\n");
        float root1 = -b / (2.0*a);
        float root2 = root1;
        printf("The 1st root is : %f" , root1);
        printf("The 1st root is : %f" , root2);
    }
    else if (d > 0)
    {
        printf("Both roots are real and different.\n");
        float root1 = (-b + sqrt(d))/(2.0*a);
        float root2 = (-b - sqrt(d))/(2.0*a);
        printf("The 1st root is : %f" , root1);
        printf("The 1st root is : %f" , root2);
    }
    else 
    {
        printf("Roots are imaginary;\nNo Solution. \n");
    } 
    return 0;
}