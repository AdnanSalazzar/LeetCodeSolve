class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        int len = nums.size();

        for (int i = 0; i < len; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                return true;
            } else {
                mp[nums[i]] = i ;
            }
        }
        return false;
    }
};
