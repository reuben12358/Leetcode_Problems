class Solution {
public:
    int numberOfSteps (int num) {
        int abc = 0;
        
        while (num > 0) {
            if (num%2) num--;
            else num/=2;
            abc++;
        }
        
        return abc;
    }
};