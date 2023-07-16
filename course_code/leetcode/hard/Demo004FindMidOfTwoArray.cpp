#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res_vec = nums1;
        int index = 0;
        for (auto i = nums2.begin(); i != nums2.end(); i++)
        {
            if (res_vec.size() == 0)
            {
                res_vec.push_back(*i);
                continue;
            }
            while (*i > res_vec.at(index))
            {
                index++;
                if (index >= res_vec.size())
                    break;
            }
            res_vec.insert(res_vec.begin() + index, *i);
            // index++;
            
        }
        int size = res_vec.size();
        return size % 2 == 0 ? (res_vec[size/2-1] + res_vec[size/2])/2 : res_vec[size/2];
    }
};
int main()
{
    Solution sol;
    // std::string str("pwwkew");
    // int res = sol.lengthOfLongestSubstring(str);
    vector<int> n1;
    vector<int> n2 = {3, 4};
    // std::vector<int> vec = {1, 2, 3, 4, 5};  // 创建一个包含初始元素的整数向量

    sol.findMedianSortedArrays(n1, n2);
    return 0;
}