#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> abc;
        for (int i = 0; i < n; ++i) {
            abc.push_back(nums.at(i));
            abc.push_back(nums.at(n+i));
        }
        return abc;
    }
};