//INSERTION SORT

#include <stdio.h>

int main(void)
{
    int arr[] = {6, 4, 5, 2, 3, 1};
    int count = sizeof(arr) / 4;

    // Shift counter
    int s;

    for (int i = 0; i < count - 1; i++)
    {
        s = i;

        // Swap the largest element
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            // Sort the arrays before the current swap
            for (int n = s - 1; n >= 0; n--, s--)
            {
                if (arr[s] < arr[n])
                {
                    int temp1 = arr[s];
                    arr[s] = arr[n];
                    arr[n] = temp1;
                }
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%i \n", arr[i]);
    }
}


