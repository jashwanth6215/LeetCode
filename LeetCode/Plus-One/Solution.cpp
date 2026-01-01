1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int carry=1;
5        for(int i=digits.size()-1;i>=0;i--)
6        {
7            digits[i]=digits[i]+carry;
8            if(digits[i]==10)
9            {
10                digits[i]=0;
11            }
12            else
13            {
14                return digits;
15            }
16        }
17        digits.insert(digits.begin(),1);
18        return digits;
19    }
20};