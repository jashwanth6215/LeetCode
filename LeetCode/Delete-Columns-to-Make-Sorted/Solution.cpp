1class Solution {
2public:
3    int minDeletionSize(vector<string>& strs) {
4        int c=0;
5        for(int i=0;i<strs[0].size();i++)
6        {
7            string st="";
8            for(int j=0;j<strs.size();j++)
9            {
10                st+=strs[j][i];
11            }
12            string s=st;
13            sort(s.begin(),s.end());
14            if(st!=s)
15            {
16                c++;
17            }
18        }
19        return c;
20    }
21};