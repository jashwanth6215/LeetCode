1class Solution(object):
2    def longestCommonPrefix(self, strs):
3        """
4        :type strs: List[str]
5        :rtype: str
6        """
7        s=min(strs,key=len)
8        for i in strs:
9            while not i.startswith(s):
10               s=s[:-1]
11            if not s:
12                return ''
13        return s