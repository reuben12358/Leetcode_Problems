#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums.at(i)) nums.at(zero++) = nums.at(i);
        }
        for (; zero < nums.size(); nums.at(zero++) = 0);
    }
};