1class Solution {
2    public int[] plusOne(int[] arr) 
3    {
4        /**
5 * Note: The returned array must be malloced, assume caller calls free().
6 */
7
8    for(int i=arr.length-1;i>=0;i--)
9    {
10        arr[i]=arr[i]+1;
11        if(arr[i]==10)
12        {
13            arr[i]=0;
14        }
15        else
16        {
17            return arr;
18        }
19    }
20    int[] result=new int[(arr.length)+1];
21        result[0]=1;
22        for(int i=1;i<arr.length;i++)
23        {
24            result[i]=arr[i-1];
25        }
26    return result;
27}
28}