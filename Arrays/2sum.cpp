#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Maps number to its index

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        // Check if complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        
        // Store current number and its index in the map
        numMap[nums[i]] = i;
    }
    
    return {}; // Return empty vector if no solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}   