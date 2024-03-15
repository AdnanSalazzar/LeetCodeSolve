class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size(); 
        int tlen = t.size();

        if(slen != tlen )
            return false ; 


        unordered_map<char , int> dict ; 

        for(int i = 0 ; i < slen ; i++)
        {
            dict[s[i]]++ ;  
        }

        

        for(int i = 0 ; i < tlen ; i++)
        {
            dict[t[i]]-- ;
            
            if(dict[t[i]] < 0 )
                return false ; 

        }
        return true ; 




    }
};
