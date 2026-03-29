class Solution(object):
    def detectCapitalUse(self, word):
        x=word[0]
        y=word[1:]
        if (word.isupper() or word.islower() or (x.isupper() and y.isupper()) or (x.isupper() and y.islower())):
            return True
        else:
            return False