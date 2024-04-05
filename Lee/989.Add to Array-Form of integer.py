class Solution(object):
    def addToArrayForm(self, num, k):
        temp = int("".join(map(str,num)))
        temp = str(temp + k)
        result = []
        for i in temp :
            result.append(int(i))
        return(result)