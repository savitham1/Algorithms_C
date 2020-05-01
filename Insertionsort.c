//INSERTION SORT
/**
	Insertion sort of an Positional List 

Uses 3 pointers:
	1. marker - holds the current position at the list
	2. pivot - holds the new value next to the marker 
	3. walk - navigates through the sorted list behind the marker and finds the postion to add pivot.

**/


#include <stdio.h>

int main(void)
{
    int arr[] = {6, 4, 5, 2, 3, 1};
    int count = sizeof(arr) / 4;

    // Shift counter
    int s;

    for (int i = 0; i < count - 1; i++)
    {
        s = i;  // s is the marker

        
        if (arr[s] > arr[s + 1])
        // If the current element is greater than the next element
        // s+1 is the pivot or the element next to marker.
        {
            //Swap those elements
            int temp = arr[i];
            arr[s] = arr[s + 1];
            arr[s + 1] = temp;

            /**
            After the above swap,
            we must also sort the elements before 's'.
            So that all the element before the marker (s) is sorted
            **/
            for (int n = s - 1; n >= 0; n--, s--)
            // n is a 'walk' and will navigate through the elements before 'marker'
            {
                if (arr[s] < arr[n])
                // When marker is lesser than walk, it implies that 
                // the list is still not sorted
                // Swap those elements
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




