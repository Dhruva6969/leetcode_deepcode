class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        richest=0
        for customer in accounts:
            wealth=0
            for bank in customer:
                wealth+=bank
            richest=max(richest,wealth)
        return richest