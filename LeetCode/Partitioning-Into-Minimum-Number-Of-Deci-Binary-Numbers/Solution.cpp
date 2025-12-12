1class Solution {
2public:
3    int minPartitions(string n) {
4        int Max=0;
5        for(auto &i:n)
6        {
7            if(i-'0'>Max)
8            {
9                Max=i-'0';
10            }
11        }
12        return Max;
13    }
14};