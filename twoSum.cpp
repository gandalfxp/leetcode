#include <vector>
#include <unordered_map>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::unordered_map<int, int> checked;
            int diff;

            for (int i = 0; i < nums.size(); i++) {
                diff = target - nums[i];

                if (checked.count(diff) == 1) {
                    return {i, checked[diff]};
                }

                checked[nums[i]] = i;
            }

            return {};
        }
};
