#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str1 = s;
        for (int i = 0; i < s.size(); ++i) {
            str1[indices[i]] = s[i];
        }
        return str1;
    }
};