#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main()
{
    int sum =add(3,4);

    printf("sum is %d\n",sum);

    return 0;
}
