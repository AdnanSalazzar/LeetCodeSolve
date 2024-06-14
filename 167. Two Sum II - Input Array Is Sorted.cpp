class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int len = numbers.size();

        for (int i = 0; i < len; i++) {
            int diff = target - numbers[i];
            int low = 0;
            int high = len  -1 ;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (numbers[mid] == diff) {
                    if (i == mid)
                        break;
                    else{
                         int st = min(i , mid);
                         int end = max (i , mid);
                        return {st + 1, end + 1};
                    }
                       
                }

                else if (numbers[mid] < diff) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return {};
    }
};
