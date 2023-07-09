#include <vector>
#include <unordered_map>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> result;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
    std::vector<int> twoSum1(std::vector<int>& nums, int target)
    {
        std::vector<int> result;
        std::unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int want_val = target - nums[i];
            if (map.count(want_val))
            {
                result.push_back(map[want_val]);
                result.push_back(i);
            }
            map.insert(std::unordered_map<int, int>::value_type(nums[i], i));
        }
        return result;
    }
};

