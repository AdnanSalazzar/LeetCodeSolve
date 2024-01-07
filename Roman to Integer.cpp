class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> hashMap;
        hashMap['I'] = 1;
        hashMap['V'] = 5;
        hashMap['X'] = 10;
        hashMap['L'] = 50;
        hashMap['C'] = 100;
        hashMap['D'] = 500;
        hashMap['M'] = 1000;
        
        
        
        int len = s.length(); 
       
        int sum = 0;
        for (int i = 0; i < len ; i++) {
            if (hashMap[s[i]] < hashMap[s[i+1]]) {
                sum -= hashMap[s[i]];
            } 
            else 
            {
                sum += hashMap[s[i]] ;
            }
        }
        return sum ;
    }
};
