class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        Given a non-empty array of integers, every element appears twice except for one. Find that single one.

        Note:

        Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
        */

        // brute force (using maps)

        map <int,int> mymap;

        for (int i = 0; i < nums.size(); ++i) {
            map <int,int> :: iterator it = mymap.find(nums.at(i));

            if (it != mymap.end()) {
                mymap[nums.at(i)] = 2;
            }
            else {
                mymap.insert(pair<int,int>(nums.at(i), 1));
            }
        }

        for (map <int,int> :: iterator it = mymap.begin(); it != mymap.end(); it++) {
            if (it->second == 1) {
                return it->first;
            }
        }

        return 0;
    }
};