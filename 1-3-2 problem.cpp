class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        /*
            Given a sequence of n integers a1, a2, ..., an,
            a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj.
            Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.
        */

        // brute force method 

        for (int i = 0; i < nums.size() - 2; ++i) {
            for (int j = i + 1; j < nums.size() - 1; ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    if (nums.at(k) < nums.at(j)) {
                       return true;
                    }
                }
            }
        }
    }
};