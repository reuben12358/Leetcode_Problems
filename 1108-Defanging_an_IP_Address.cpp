#include <string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string str1 = "";
        for (int i = 0; i < address.size(); ++i) {
            if (!isdigit(address.at(i))) {
                str1 += "[.]";
            }
            else str1 += address.at(i);
        }
        return str1;
    }
};