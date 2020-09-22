class Solution {
public:
    int minSteps(int n) {
        /*
        Initially on a notepad only one character 'A' is present. You can perform two operations on this notepad for each step:

        Copy All: You can copy all the characters present on the notepad (partial copy is not allowed).
        Paste: You can paste the characters which are copied last time.

        Given a number n. You have to get exactly n 'A' on the notepad by performing the minimum number of steps permitted.
        Output the minimum number of steps to get n 'A'.
        */
        int i = 0;
        string str1 = 'a';

        while  (str1.size() != n) {
            //yeah idk what to add here
            cout << "yeeeeeeeeeeeeeeeeeeeeeeeet";
            paste(str1, str1, i);
        }

        return i;
    }

    void copy(string & str, int & n) {
        str += str;
        n++;
    }

    void paste(string & str1, string str2, int & n) {
        str1 += str2;
        n++;
    }
};