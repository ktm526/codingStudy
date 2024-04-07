#include <vector>
class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];
        int result = -1;
        if (edges[1][0]==a) {
            result = a;
        }
        if (edges[1][0]==b) {
            result = b;
        }
        if (edges[1][1]==a) {
            result = a;
        }
        if (edges[1][1]==b) {
            result = b;
        }
        return result;
    }
};