class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int len = strs.size(); 
        string temp ; 
        unordered_map<string , vector<string>> mp ; 
        for(int i = 0 ;i < len ; i++)
        {
            temp = strs[i];
            sort(temp.begin() , temp.end());
            mp[temp].push_back(strs[i]); 
        }

        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;



    }
};
