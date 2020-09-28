#include <vector>

class Solution {
public:
    bool iseven(int num) {
        int a = 0;
        while(num) {
            a++;
            num/=10;
        }
        if (a%2) return false;
        return true;
    }
    int findNumbers(std::vector<int>& nums) {
        int count = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (iseven(nums.at(i))) count++;
        }
        
        return count;
    }
};