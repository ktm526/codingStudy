// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 

// Prime number : 2,3,5,7,11,13,17,19,23,29,31,37,41,47....

class Solution {
public:
    int count;
    int countPrimes(int n) {
      for (int i=1 ; i<n; i++) {
        int check = 0;
        if (i!=2&&i%2==0) {
            continue;
        }
        if (i!=3&&i%3==0) {
            continue;
        }
        if (i!=5&&i%5==0) {
            continue;
        }
        if (i!=7&&i%7==0) {
            continue;
        }
        if (i!=11&&i%11==0) {
            continue;
        }
        for (int j=1; j<i; j++) {
            if (i%j==0) {
                check++;
            }
            if (j*j==i) {
                break;
            }
            
        }
        if (check == 1) {
            count++;
        }
      } 
      return count; 
    }
};