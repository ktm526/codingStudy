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
        std::string str = std::to_string(total);
        std::vector<int> result;
        // for (int j : str) {
        //     result.push_back(std::stoi(j));
        // }
    }
};