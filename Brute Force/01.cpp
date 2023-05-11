/*Approach: 
The approach involves using two nested loops to check all possible pairs of integers in the input vector. If the sum of any two integers equals the target value, the indices of those integers are returned as a vector. If no two integers add up to the target, an empty vector is returned.*/

//including the necessary libraries to work with input/output streams and vector data structures
#include <iostream>
#include <vector>

//allows us to use standard C++ library functions and objects without explicitly using the "std::" prefix
using namespace std;

class Solution{
public:
    // Define a method named twoSum that takes in a vector of integers and an integer target and returns a vector of two integers
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = 0;
        // Iterate through the vector of integers
        while (i < nums.size()){
            // Check all pairs of integers in the vector
            j = i + 1;
            while (j < nums.size()){
                // If the sum of the two integers is equal to the target, return the indices of the two integers as a vector
                if (nums[i] + nums[j] == target)
                    return {i, j};
                j += 1;
            i += 1;
            }
        }
        // If no two integers in the vector add up to the target, return an empty vector
        return {};
    }
};

int main() {
    // Create a Solution object named sol
    Solution sol;
    // Define a vector of integers named nums
    vector<int> nums = {2, 7, 11, 15};
    // Define an integer named target
    int target = 9;
    // Call the twoSum method on the sol object with nums and target as arguments and store the result in a vector named res
    vector<int> res = sol.twoSum(nums, target);
    // Print the elements of the res vector to the console
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    // End the main function
    return 0;
}
