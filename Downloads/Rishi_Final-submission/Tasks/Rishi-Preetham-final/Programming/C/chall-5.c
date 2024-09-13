#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int t;
        scanf("%d", &t);

        int array[t];
        for (int i = 0; i < t; ++i) {
            scanf("%d", &array[i]);
        }

        int sum = 0;
        int maxSum = 0;
        int currentSum = 0;

        for (int i = 0; i < t; ++i) {
            if (array[i] != 0) {
                currentSum += array[i];
            } else {
                if (currentSum > maxSum) {
                    maxSum = currentSum;
                }
                currentSum = 0;
            }
        }

        
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        printf("%d\n", maxSum);
    }

    return 0;
}