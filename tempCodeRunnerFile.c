#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a[3][3] = {6, 2, 5, 0, 1, 3, 4, 9, 8};

    int *p = &a[0][0]; // initliaze the arrray
    //we can also intliaze this way
    //int *p=a[0];

    printf("%d \n", p);        //Print base address of whole array
    printf("%d \n", a);        //Print base address of whole array
    printf("%d\n", *a);        //Print base address of whole array
    printf("%d \n", a[0]);     //Print base address of whole array
    printf("%d \n", &a[0][0]); //Print base address of whole array
    printf("%d \n", &a);       //Print base address of whole array

    printf("%d\n", *a + 1);       //Print address of a[0] 2nd element
    printf("%d\n", p + 1);        //Print address of array 2nd element that is same as a[0] 2nd element address
    printf("%d\n", a + 1);        //Print address of a[1] 1st element
    printf("%d\n", *(a + 1));     //Print address of a[1] 1st element
    printf("%d\n", *(a + 1) + 2); //Print address of a[1] 3rd element

    printf("%d\n", *(*a + 1));       // printf value of a[0] 2nd element
    printf("%d\n", *(*(a + 1) + 2)); // printf value of a[1] 3rd element
    printf("%d\n", *(*(a + 2)));     // printf value of a[2] 1st element
    return 0;
}