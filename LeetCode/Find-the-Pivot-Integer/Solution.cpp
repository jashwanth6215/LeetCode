class Solution {
public:
    int pivotInteger(int n) {
        vector<int>v(n);
        if(n==1)
        {
            return 1;
        }
        v[0]=1;
        for(int i=2;i<=n;i++)
        {
            v[i-1]=i+v[i-2];
        }
        int total=v[n-1];
        for(int i=0;i<n;i++)
        {
            if(v[i]==total-v[i]+(i+1))
            {
                return i+1;
            }
        }
        return -1;
    }
};