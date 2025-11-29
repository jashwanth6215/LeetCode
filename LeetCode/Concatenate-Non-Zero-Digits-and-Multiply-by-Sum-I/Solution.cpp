1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        string s=to_string(n);
5        long long sum=0,digit=0;
6        int c=0;
7        for(auto &i:s)
8        {
9            if(i!='0')
10            {
11                c=i-'0';
12                sum+=c;
13                digit=digit*10+c;
14            }
15        }
16        return digit*sum;
17    }
18};