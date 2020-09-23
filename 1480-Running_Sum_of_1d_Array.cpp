#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>abc;
        if(!nums.size()) return abc;
        abc.push_back(nums.at(0));
        for (int i = 0; i+1 < nums.size(); ++i) {
            abc.push_back(abc.at(i) + nums.at(i+1));
        }
        return abc;
    }
};