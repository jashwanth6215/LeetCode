class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(bits.size()-1>i)
        {
            if(bits[i]==0)
            {
                i++;
            }
            else
            {
                i+=2;
            }
        }
        if(i==bits.size()-1)
        {
            return true;
        }
        return false;
    }
};