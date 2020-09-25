class Solution {
public:
    vector<string> fizzBuzz(int n) {
        /*
            Write a program that outputs the string representation of numbers from 1 to n.

            But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”.
            For numbers which are multiples of both three and five output “FizzBuzz”.
        */

        vector <string> str1;
        for (int i = 0; i < n; ++i) {
            if ((i + 1) % 5 == 0) {
                if ((i + 1) % 3 == 0) {
                    str1.push_back("FizzBuzz");
                }
                else {
                    str1.push_back("Buzz");
                }
            }
            else if ((i + 1) % 3 == 0) {
                if ((i + 1) % 5 == 0) {
                    str1.push_back("FizzBuzz");
                }
                else {
                    str1.push_back("Fizz");
                }
            }
            else {
                str1.push_back(to_string(i+1));
            }
        }
        return str1;
    }
};