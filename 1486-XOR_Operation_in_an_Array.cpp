class Solution {
public:
    int xorOperation(int n, int start) {
        if (n==1) return start;
        return start ^ xorOperation(n-1,start+2);
    }
};