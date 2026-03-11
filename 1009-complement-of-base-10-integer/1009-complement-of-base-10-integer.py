class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        s=bin(n)[2:]
        res=""
        for i in range(len(s)):
            if s[i]=='0':
                res+='1'
            else:
                res+='0'
        num=int(res,2)
        return num;