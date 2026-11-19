#include <stdio.h>

int countAboveAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];                
    }

    int s = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] * size > sum) {     
            s++;                        
        }
    }
    return s;
}

int main() {
    int nums[] = {9, 6, 2, 12, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("%d", countAboveAverage(nums, size));

    return 0;
}