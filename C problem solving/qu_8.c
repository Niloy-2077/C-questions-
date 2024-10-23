//Write a Program to rotate the array to the left.
#include<stdio.h>

void rotate(int arr[], int d,int n)
{
    for (int count = 0; count < d; count++)
    {
        //Rotate by one
        int first = arr[0];
        for (int i = 0; i < n -1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = first;
        
    }
    
}
int main()
{
    int n;
    printf("Enter the number of the elements you want to insert: ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int d;
    scanf("%d", &d);

    rotate(arr , d, n);

    // Print the modified array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}