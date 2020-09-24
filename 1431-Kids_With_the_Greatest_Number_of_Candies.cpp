#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> abc;
        int biggest = candies.at(0);
        for (int i = 1; i < candies.size(); ++i) {
            if (biggest < candies.at(i)) biggest = candies.at(i);
        }
        for (int i = 0; i < candies.size(); ++i) {
            if (candies.at(i) + extraCandies < biggest) abc.push_back(false);
            else abc.push_back(true);
        }
        return abc;
    }
};