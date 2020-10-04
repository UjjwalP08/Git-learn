#include <stdio.h>

int add(int a, int b)
{

    return a + b;
}

void func1(int (*fptr)(int, int))
{

    printf("hello\n");
    printf("The sum is %d \n ", add(3, 5));
}

void func2(int (*fptr)(int, int))
{

    printf("hi\n");
    printf("The sum is %d \n ", add(4, 14));
}

int main()
{
    int (*fp)(int, int);
    fp = add;
    func1(fp);
    func2(fp);

    return 0;
}
