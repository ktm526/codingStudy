#include <vector>
#include <string>
class Solution {
public:
    std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
        int i = 0;
        int number;
        while (i<num.size()) {
            number += num[i]*pow(10,num.size()-1-i);

            i++;
        }
        int total = number + k;
        // std::string str = to_string(total);
        // std::vector<int> result;
        // for (char j : str) {
        //     int k = j - '0';
        //     result.push_back(k);
        // }
        // return result;
    }
};