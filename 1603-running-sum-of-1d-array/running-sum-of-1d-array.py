class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        arr=[]
        sum=0
        for i in nums:
            sum+=i
            arr.append(sum)
        return arr