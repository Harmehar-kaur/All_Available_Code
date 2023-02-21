#include <stdio.h>
int main()
{
    // size of array
    int n;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    // declare array a of size n
    int a[n];
    //input values of array from user
    printf("\n Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //performing bubblesort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            //comparing two consecutive elements if a[j] is greater than a[j+1]
            // we swap the elements
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //printing the sorted array
    printf("\n Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
} 