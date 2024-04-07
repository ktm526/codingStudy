#include <vector>
class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges) {
       int countNode = edges.size() + 1;
       int centerNum = -1; 
       std::vector<int> allRelation;
       for (auto i: edges) {
            allRelation.push_back(i[0]);
            allRelation.push_back(i[1]);
       }
       for (int j = 1; j<=countNode; j++) {
            for (auto k: allRelation) {
                int check = 0;
                if (j==k) {
                    check++;
                }
                if (check==edges.size()) {
                    centerNum = j;
                    break;
                }
            }
       }
       return centerNum;
    }
};