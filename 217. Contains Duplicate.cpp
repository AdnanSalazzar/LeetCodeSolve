class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int size = nums.size();
        unordered_map<int , int > hashmapp ; 
        for( int i = 0; i < size ; i++)S
        {
            if(hashmapp.find(nums[i]) != hashmapp.end())
                return true;

            hashmapp[nums[i]] = i ;
        }
        
        return false; 
    }
};
