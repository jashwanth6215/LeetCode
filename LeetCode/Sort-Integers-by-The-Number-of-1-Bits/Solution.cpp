1class Solution {
2public:
3    vector<int> sortByBits(vector<int>& arr) {
4        sort(arr.begin(),arr.end(),[](const int& a, const int& b){
5          int pa=__builtin_popcount(a);
6          int pb= __builtin_popcount(b);
7          if(pa == pb) {
8            return a < b;
9          }
10          return pa < pb;
11        });
12        return arr;
13    }
14};