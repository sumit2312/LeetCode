//https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/565/

/*
Write a function that takes an unsigned integer and return the number of '1' bits it has
 (also known as the Hamming weight).

 

Example 1:

Input: 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n>0){
            ans+=(n&1);
            n=n>>1;
        }
        return ans;
    }
};