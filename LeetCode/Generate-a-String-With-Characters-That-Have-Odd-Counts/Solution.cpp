1class Solution {
2public:
3    string generateTheString(int n) {
4        string ans="";
5        if(n%2==0)
6        {
7            for(int i=0;i<n-1;i++)
8            {
9                ans+='a';
10            }
11            ans+='b';
12            return ans;
13        }
14        for(int i=0;i<n;i++)
15        {
16            ans+='a';
17        }
18        return ans;
19    }
20};