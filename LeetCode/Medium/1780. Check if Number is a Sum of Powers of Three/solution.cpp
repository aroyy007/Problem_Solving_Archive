class Solution {
public:
    bool checkPowersOfThree(int n) {
        string s = "";
        while (n > 0) {
            s += to_string(n % 3);
            n /= 3;
        }

        if (s.find('2') != string::npos) {
            return false;
        } else {
            return true;
        }
    }
};
