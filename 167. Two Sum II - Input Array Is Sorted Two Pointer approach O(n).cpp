class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int len = numbers.size() ; 
        int right = len - 1 ;
        int left = 0 ;  

        while(left < right)
        {
            int sum = numbers[left] + numbers[right];

            if(target == sum ){

                return {left + 1 , right+ 1 } ; 
            }

            else if ( sum < target  ){
                left++ ; 
            }

            else 
                right-- ; 
        }
        return {} ; 
    }
};
