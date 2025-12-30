1/**
2 * @param {number} target
3 * @param {number[]} nums
4 * @return {number}
5 */
6var minSubArrayLen = function(target, nums) {
7        let max=0;
8        let c=0;
9        for(let i=0;i<nums.length;i++)
10        {
11            max+=nums[i];
12            c++;
13            if(max>=target)
14            {
15                break;
16            }
17        }
18        if(max<target)
19        {
20            return 0;
21        }
22        for(let i=1;i<nums.length;i++)
23        {
24            let ans=max-nums[i-1];
25            if(ans>=target)
26            {
27                c--;
28                max=ans;
29            }
30            else
31            {
32                max=ans+nums[i+c-1];
33            }
34        }
35        return c;
36};