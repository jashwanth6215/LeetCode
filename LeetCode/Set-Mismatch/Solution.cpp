1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4       unordered_set<int>s;
5       int sum=0;
6       int n=nums.size();
7       vector<int>v;
8       for(auto &i:nums)
9       {
10            if(s.find(i)!=s.end())
11            {
12                v.push_back(i);
13                sum-=i;
14            }
15            s.insert(i);
16            sum+=i;
17       }
18       v.push_back(((n*(n+1))/2)-sum);
19       return v;
20    }
21};