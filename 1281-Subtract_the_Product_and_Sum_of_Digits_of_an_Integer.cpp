#include <vector>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>nums;
        
        for (;n!=0;n=n/10) {
            nums.push_back(n%10);
        }
        
        int product = 1;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            product *= nums.at(i);
            sum += nums.at(i);
        }
        
        return product-sum;
    }
};