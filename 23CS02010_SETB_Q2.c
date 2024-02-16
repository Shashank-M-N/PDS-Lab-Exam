#include <stdio.h>

int main()
{
    int lower_limit, upper_limit, sum;
    printf("Input the lower limit: ");  //inputing the lower limit.
    scanf("%d", &lower_limit);
    printf("Input the upper limit: ");  //inputing the upper limit.
    scanf("%d", &upper_limit);
    printf("Perfect numbers in the range are: ");
    for (int i = lower_limit; i <= upper_limit; i++) {  //going through each number in the range.
        sum = 0;
        for (int j = 1; j < i; j++)  //going through the divisors and adding them.
            if (i % j == 0)
                sum += j;
        if (sum == i)  //checking if its a perfect number.
            printf("%d, ", i);
    }
    return 0;
}