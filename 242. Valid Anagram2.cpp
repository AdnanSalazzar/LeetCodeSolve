class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size();
        int tlen = t.size();

        if (slen != tlen)
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return true;
        else
            return false;
    }
};
