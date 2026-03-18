Aim:

To write a C program to perform Linear Search using recursion and measure 
the execution time required to find a given element in an array.

Algorithm (Linear Search using Recursion):

1.Start
2.Initialize an array of size n with random values
3.Generate a random key element to search
4.Call the recursive function ls(array, begin, end, key)
5.In the function:
   If begin == end, print "Element not found"
   Else if array[begin] == key, print "Element found at position"
   Else recursively call function with begin + 1
6.Measure start time before function call
7.Measure end time after function call
8.Calculate total execution time
9.Display result
10.Stop


PROGRAM:

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void ls(int a1[], int begin, int stop, int search)
{
    if(begin == stop)
        printf("Element not found\n");
    else if(a1[begin] == search)
        printf("Element found at position %d\n", begin + 1);
    else
        ls(a1, begin + 1, stop, search);
}
int main()
{
    int a[10000], n = 10000, key, i;
    clock_t start, end;
    for(i = 0; i < n; i++)
        a[i] = rand() % 1000;
    key = rand() % 1000;
    start = clock();
    ls(a, 0, n, key);
    end = clock();
    printf("Total time taken: %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}

Sample Output:
Element found at position 527
Total time taken: 0.000012 seconds

Result:
The Linear Search program was successfully implemented using recursion.
The given element was searched in the array, and the execution time required
for the search operation was calculated and displayed.
