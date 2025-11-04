int check(unordered_map<int,int> m,int x)
{
    vector<pair<int,int>>v;
    for(auto &i:m)
    {
        v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(),[](auto &a,auto &b){
        if(a.second==b.second)
        {
            return a.first>b.first;
        }
        return a.second>b.second;
    });
    int sum=0;
    int n=x>m.size()?m.size():x;
    for(int i=0;i<n;i++)
    {
        sum+=v[i].first*v[i].second;
    }
    return sum;
}
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            m[nums[i]]++;
        }
        v.push_back(check(m,x));
        for(int i=k;i<nums.size();i++)
        {
            if(m[nums[i-k]]-1==0)
            {
                m.erase(nums[i-k]);
            }
            else
            {
                m[nums[i-k]]--;
            }
            m[nums[i]]++;
            v.push_back(check(m,x));
        }
        return v;
    }
};