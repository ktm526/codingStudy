class Solution(object):
    def heightChecker(self, heights):
        #expected = heights  : "a = b" 연산은 b의 값을 a에 대입하는 대입 연산자임.
        #                       하지만, 리스트의 경우 원소가 저장된 메모리 주소를 반환하게 됨 -> line6에서 정렬을 하면 heights의 원소 역시 정렬됨(같은 메모리 참조) 
        expected = list(heights) #리스트를 복제하여 이를 사용해야 heights와 expected 배열이 서로 참조하지 않게 됨.
        expected.sort()
        result = 0
        for i in range (len(expected)) :
            if expected[i] != heights[i] :
                result += 1
        return(result)