#include <stdio.h>

int main()
{
    int number, condition_1, condition_2, temp_1, temp_2, count = 0;
    printf("Input the number: ");  //inputing the number.
    scanf("%d", &number);
    for (int i = 0; i <= number / 2; i++) {
        condition_1 = 0, condition_2 = 0, temp_1 = 2, temp_2 = 2;
        while (temp_1 < i) {  //checking if the first number is a composite number.
            if (i % temp_1 == 0) {
                condition_1 = 1;
                break;
            }
            temp_1++;
        }
        while (temp_2 < number - i) {  //checking if the second number is a composite number
            if ((number - i) % temp_2 == 0) {
                condition_2 = 1;
                break;
            }
            temp_2++;
        }
        if (condition_1 == 1 && condition_2 == 1) {
            count++;  //increasing the count of valid inputs.
            if (count == 1)
                printf("The two composite numbers which make the sum as %d are: \n", number);
            printf("%d %d\n", i, number - i);  //outputing the valid numbers.
        }
    }
    if (count == 0)  
        printf("The number %d can't be represented as the sum of two composite numbers.", number);
    return 0;
}