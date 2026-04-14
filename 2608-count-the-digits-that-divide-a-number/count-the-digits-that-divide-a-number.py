class Solution(object):
    def countDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        count =0
        main=num
        while num!=0:
            rem=num%10
            if rem != 0 and main % rem == 0:
                count+=1
            num//=10
        return count
