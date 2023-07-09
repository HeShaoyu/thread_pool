#include <string>
#include <map>
class Solution {
public:
    int isExist(const std::string& s, char c)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                return i;
            }
        }
        return -1;
    }
    int lengthOfLongestSubstring(std::string s) {
        
        if (s.size() == 0 or s.size() == 1)
        {
            return s.size();
        }
        int max_len = 1;
        std::string sub_str;
        for (int i = 0; i < s.size() - 1; )
        {
            for (int j = i+1; j < s.size(); j++)
            {
                sub_str = s.substr(i, j-i);
                int exist = isExist(sub_str, s[j]);
                if (exist != -1)
                {
                    i += exist;
                    break;
                }else
                {
                    max_len = (sub_str.size() + 1) > max_len ? (sub_str.size() + 1) : max_len; 
                }
            }
            i++;
        }
        return max_len;
    }  
};
int main()
{
    Solution sol;
    std::string str("pwwkew");
    int res = sol.lengthOfLongestSubstring(str);
    return 0;
}