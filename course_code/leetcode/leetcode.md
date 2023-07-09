### 1. 两数之和
本人解法
```c++
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
```
哈希表解法
将遍历过的元素存入哈希表，从而减少运算次数
```c++
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
```
### 2. 两数相加
本人解法
```c++
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* node = new ListNode(0);
    ListNode* l = node;
    int plus = 0;
    while (l1 or l2 or plus)
    {
        ListNode* tempNode = new ListNode;

        if (l1 and l2)
        {
            if ((l1->val + l2->val + plus) > 9)
            {
                tempNode->val = (l1->val + l2->val + plus) % 10;
                plus = 1;
            }else
            {
                tempNode->val = l1->val + l2->val + plus;
                plus = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
        }else if (l1)
        {
            if ((l1->val + plus) > 9)
            {
                tempNode->val = (l1->val + plus) % 10;
                plus = 1;
            }else
            {
                tempNode->val = l1->val + plus;
                plus = 0;
            }
            l1 = l1->next;
        }else if(l2)
        {
            if ((l2->val + plus) > 9)
            {
                tempNode->val = (l2->val + plus) % 10;
                plus = 1;
            }else
            {
                tempNode->val = l2->val + plus;
                plus = 0;
            }
            l2 = l2->next;
        }
        else
        {
            tempNode->val = 1;
            plus = 0;
        }
        l->next = tempNode;
        l = l->next;
    }
    return node->next;
}
```
## 3. 无重复长度的最长字串
本人解法：
```c++
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
```