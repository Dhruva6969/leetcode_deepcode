class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        x=int("".join(map(str,digits)))
        y=x+1
        plus=str(y)
        y = list(map(int,plus))
        return y
       