// The class Solution contains the method twoSum that takes an integer array and a target integer as input
class Solution {
    // The method returns an integer array of size 2
    public int[] twoSum(int[] nums, int target) {
        // Create an integer array of size 2 to hold the result
        int[] result = new int[2];
        
        // Iterate through the array using nested loops
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                // Check if the sum of the two numbers is equal to the target
                if (nums[i] + nums[j] == target) {
                    // Set the result array to hold the indices of the two numbers
                    result[0] = i;
                    result[1] = j;
                    // Return the result array
                    return result;
                }
            }
        }
        // Return the result array if no such pair is found
        return result;
    }
}