class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I' && s[i + 1] == 'V') {
                ans = ans + 4;
                i++;
            } else if (s[i] == 'I' && s[i + 1] == 'X') {
                ans = ans + 9;
                i++;
            } else if (s[i] == 'X' && s[i + 1] == 'L') {
                ans = ans + 40;
                i++;
            } else if (s[i] == 'X' && s[i + 1] == 'C') {
                ans = ans + 90;
                i++;
            } else if (s[i] == 'C' && s[i + 1] == 'D') {
                ans = ans + 400;
                i++;
            } else if (s[i] == 'C' && s[i + 1] == 'M') {
                ans = ans + 900;
                i++;
            } else if (s[i] == 'I') {
                ans = ans + 1;
            } else if (s[i] == 'V') {
                ans = ans + 5;
            } else if (s[i] == 'X') {
                ans = ans + 10;
            } else if (s[i] == 'L') {
                ans = ans + 50;
            } else if (s[i] == 'C') {
                ans = ans + 100;
            } else if (s[i] == 'D') {
                ans = ans + 500;
            } else if (s[i] == 'M') {
                ans = ans + 1000;
            }
        }
        return ans;
    }
};