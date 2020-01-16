// BUBBLE SORT

#include <stdio.h>

int main(void)
{
    int arr[] = {5, 7, 23, 9, 0, 77, 1, 8};
    int swap_counter = -1;

    // Count the number of elements in an array
    int count = sizeof(arr) / 4;

    //printf("%i \n", count);

    /* To identify the position from where elements are sorted */
    int end = 0;

    printf("Unsorted: ");
    for (int j = 0; j < count; j++)
    {
        printf("%i ", arr[j]);
    }
    printf("\n");

    // Swap counter is zero when all the elements are sorted
    while (swap_counter != 0)
    {
        swap_counter = 0;

        // Loop iterates until all the elements are sorted.
        // after every iteraltion, there is one element that is sorted in the list
        // Variable 'end' avoids repetition of the process on already sorted elements.

        for (int i = 0; i < (count - 1) - end; i++)
        {
            // Element Swap
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                swap_counter++;
            }
        }
        // Number of elements sorted
        end++;
    }

    printf("Sorted using Bubble Sort: ");
    for (int j = 0; j < count; j++)
    {
        printf("%i ", arr[j]);
    }
    printf("\n");
}
