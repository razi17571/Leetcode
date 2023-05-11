/*Approach:
This code first initializes an array of size 2 to hold the indices of the two numbers that sum to the target. It then uses two nested loops to iterate over all possible pairs of numbers in the input array, checking if their sum equals the target. If a pair is found, its indices are stored in the indices array, and the returnSize variable is set to 2 to indicate that two indices were returned. Finally, if no pair is found, returnSize is set to 0 and NULL is returned. The main function calls the twoSum function with the example input array and prints the resulting indices if they exist, and frees the memory allocated for the indices array.*/

// For i/o operations
#include <stdio.h> 
// To use malloc function
#include <stdlib.h> 

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the return array
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Loop through each element in the array
    for (int i = 0; i < numsSize; i++) {
        // Check if there is another element in the array that can be added to the current element to get the target sum
        for (int j = i + 1; j < numsSize; j++) {
            // If we find a pair of elements that add up to the target sum, store their indices in the return array
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                
                // Set the return size to 2
                *returnSize = 2;
                
                // Return the result array
                return result;
            }
        }
    }
    // If we didn't find a pair of elements that add up to the target sum, return an empty array
    *returnSize = 0;
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    if (result) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    }
    return 0;
}