#include <string>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L') balance ++;
            else balance--;
            if (!balance) count++;
        }
        return count;
    }
};