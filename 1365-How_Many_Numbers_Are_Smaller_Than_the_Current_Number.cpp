#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>small;
        for (int i = 0; i < nums.size(); ++i) {
            small.push_back(0);
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[j] < nums[i] && j!=i) small.at(i)++;
            }
        }
        return small;
    }
};