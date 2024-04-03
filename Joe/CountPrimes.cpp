class Solution {
public:
    int count;
    int countPrimes(int n) {
      for (int i=1 ; i<n; i++) {
        int check = 0;
        for (int j=1; j<i; j++) {
            if (i%j==0) {
                check++;
            }
        }
        if (check == 1) {
            count++;
        }
      } 
      return count; 
    }
};