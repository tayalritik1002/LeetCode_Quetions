class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);  
       
        for(char ch : s) {
            freq[ch - 'a']++;
        }
        
        int minLength = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) continue;
            minLength += (freq[i] % 2 == 0) ? 2 : 1;
        }
        return minLength;
    }
};