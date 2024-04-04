class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        temp = int("".join(map(str,num)))
        temp = str(temp + k)
        result = []
        for i in temp :
            result.append(int(i))
        return(result)