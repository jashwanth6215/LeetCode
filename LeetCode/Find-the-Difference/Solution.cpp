1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        unordered_map<char,int>st;
5        for(auto &i:s)
6        {
7            st[i]++;
8        }
9        char ans;
10        for(auto &i:t)
11        {
12            st[i]--;
13        }
14        for(auto &i:st)
15        {
16            if(i.second<0)
17            {
18                ans=i.first;
19                break;
20            }
21        }
22        return ans;
23    }
24};