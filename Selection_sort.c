// SELECTION SORT
/* ALGORITHM: In an array of unsorted elements,
1. Loop until all the elements are sorted
2. find the smallest element in the array
3. swap it with the first element
4. find the next smallest element and swap that with the second element
5. process continues until all the elements are sorted
*/

#include <stdio.h>

int main(void)
{
    int unsorted[] = {5, 8, 0, 76, 1, 4, 5, 3};

    // Find the size of an array = Number of element * size of each element
    // It is divided by 4 since the elements are integer
    int count = (sizeof (unsorted)) / 4;
    //printf("count: %i\n", count);

    // Display array
    printf("Unsorted: ");
    for (int k = 0; k < count; k++)
    {
        printf("%i ", unsorted[k]);
    }

    printf("\n");
    printf("Sorted:   ");

    for (int i = 0; i < count; i++)
    {
        // Smallest element
        int smallest = unsorted[i];
        int location = 0;

        // TODO: find the smalled element in the array
        for (int j = i; j < count; j++)
        {
            if (smallest > unsorted[j])
            {
                smallest = unsorted[j];
                location = j;
            }
        }

        // Element swap
        int temp = unsorted[i];
        unsorted[i] = smallest;
        unsorted[location] = temp;
        printf("%i ", unsorted[i]);

        /*printf("temp: %i\n", temp);

        for (int k = 0; k < count; k++)
        {
            printf("%i ", unsorted[k]);
        }
        printf("\n"); */

    }
    printf("\n");
}
