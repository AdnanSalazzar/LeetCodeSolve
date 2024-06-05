class Solution {
public:
    bool isValid(string s) {

        stack<char> stack;

        int len = s.size();

        for (int i = 0; i < len ; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            }

            else if (s[i] == ')') {
                if (stack.empty() == false && stack.top() == '(')
                    stack.pop();
                else
                    return false;
            }

            else if (s[i] == '}') {
                if (stack.empty() == false && stack.top() == '{')
                    stack.pop();
                else
                    return false;
            }

            else if (s[i] == ']') {
                if (stack.empty() == false && stack.top() == '[')
                    stack.pop();
                else
                    return false;
            }
        }

        if (stack.empty())
            return true;
        else 
            return false; 
    }
  };
