#include<stdio.h>

int main()
{
    int first, second;
    
    printf("Enter two integers : ");
    scanf("%d %d", &first, &second);
    printf("The two numbers are : %d and %d\n", first, second);
    printf("Their sum is : %d\n", first + second);
    
    return 0;
}
