class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int, int> list;
      for (int num: nums) {
        list[num]++;
        if (list[num]>1) {
            return true;
        }
      }  
      return false;
    }
};