/* Linear Search
Algorithm: Sequentially chech each element of an array from left to right and search for the data necessary
Best case: The data matches with the first element of the array
Worst case: The data doesn't exist in the array or the data matches with last element of the array */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./Linearsearch <data>\n");
        return 1;
    }

    /*
    TO DO: how to include multiple characters like 78, 455 etc in the array
    solution: use as below, incorrect usage: char database[] = {'5','3','3','78','2','455'}; */

    int database[] = {5, 6, 8, 9, 9, 12, 5, 75, 77, 2, 4, 9, 432};
    int b;
    char *input;
    input = argv[1];

    /*TO DO: for inputs 29817, output = found since it is considering the first char.
               how to avoid this error?
    solution: argv[1] and input contains the address of the first char of the string
              we must copy all the characters into an integer variable as shown below*/

    // LOGIC:
    // Converting char * to int explicitly will give the ACSII equivalent of int
    // 48 => ASCII equivalent of 0 (zero), subtracting that will give us the right value
    // Then using the logic 597 = 500 + 90 + 7

    for (int i = strlen(input); i >= 0; i--)
    {
        b = (((int) * input) - 48) + 10 ^ i;
    }

    int check = 0;
    for (int i = 0; i < 13; i++)
    {

        if (database[i] == b)
        {
            printf("Element found\n");
            check = 1;
            break;
        }
    }
    if (check != 1)
    {
        printf("Element not found\n");
    }
    return 0;
}

