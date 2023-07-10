#include<stdio.h>

int main()
{
    int n;
    int sum;
    int current;
    int lcv; // loop control variable
    
    printf("Enter a positive number n > ");
    scanf("%d", &n); // check that n is really positive
    
    sum = 0;
    
    for(lcv = 0; lcv < n; lcv++) {
        printf("\nEnter an integer > ");
        scanf("%d", &current);
        printf("\nThe number was %d\n", current);
        sum = sum + current;
    }
    
    printf("The sum is %d", sum);
    
    return 0;
}
