// LeetCode (Easy) | Two Sums | https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            int current_num = nums[i];

            int complement = target - current_num;

            auto it = num_map.find(complement);
            
            if (it != num_map.end()) {
                return {it->second, i};
            }

            num_map[current_num] = i;
        }

        return {};
    }
};
