/*Akil is looking to develop a program that identifies all the factors of a positive integer. The program should accept an integer 'n' as input, and then output all of its factors, while also classifying them as either odd or even. This task should be accomplished using a for loop.



For example, the factors of number 15 are calculated as follows:

1 * 15 = 15

3 * 5 = 15

5 * 3 = 15

15 * 1 = 15

1, 3, 5, and 15 are the factors of 15.

Odd factors are 1, 3, 5, and 15. There are no even factors.

Input format :
The input consists of an integer n for which the factors need to be calculated.

Output format :
The first line prints "Factors: " followed by the factors for the given number as integers, separated by a space.

The second line prints "Odd factors: " followed by the odd factors for the given number as integers, separated by a space.

The third line prints "Even factors: " followed by the even factors for the given number as integers, separated by a space.

If there are no even factors present, the third line prints "Even factors: Unavailable".*/


#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int i, count = 0;
    printf("Factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            ++count;
            printf("%d ", i);
        }
    }

    printf("\nOdd factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\nEven factors: ");
    int b=0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0 && i % 2 == 0) {
            printf("%d ", i);
            b++;
        }
    }
    if (b==0) printf("Unavailable");
    return 0;
}
