class Solution {
public:
    string longestNiceSubstring(string s) {
       
        if (s.size() < 2) {
            return "";
        }
        
       
        for (int i = 0; i < s.size(); ++i) {
            if (isNiceSubstring(s, i)) {
                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));
                
                return left.size() > right.size() ? left : right;
            }
        }
        return "";
    }

   
    bool isNiceSubstring(const string& s, int i) {
        char ch = s[i];
       
        if (ch >= 'a' && ch <= 'z' && find(s.begin(), s.end(), ch - 32) == s.end())
            return false;
        else if (ch >= 'A' && ch <= 'Z' && find(s.begin(), s.end(), ch + 32) == s.end())
            return false;
        return true;
    }
};

Input
s =
"YazaAay"
Output
""
Expected
"aAa"
