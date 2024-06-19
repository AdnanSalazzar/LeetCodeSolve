
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        istringstream iss(s);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        int len = pattern.size();
        for (int i = 0; i < len; i++) {
            char currentChar = pattern[i];
            string currentWord = words[i];

            if (charToWord.count(currentChar) && charToWord[currentChar] != currentWord) {
                return false;
            }

            if (wordToChar.count(currentWord) && wordToChar[currentWord] != currentChar) {
                return false;
            }

            charToWord[currentChar] = currentWord;
            wordToChar[currentWord] = currentChar;
        }

        return true;
    }
};
  
