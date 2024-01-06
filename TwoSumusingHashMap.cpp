class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int len = nums.size();
        
        unordered_map<int, int> hashmap;
        for (int i = 0; i < len; i++) {
            int x = target - nums[i];

            if (hashmap.find(x) != hashmap.end()) {
                return { hashmap[x], i };
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
