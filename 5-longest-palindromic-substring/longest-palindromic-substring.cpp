class Solution {
public:
    string longestPalindrome(string s) {
        int longestLen = 0;
        int startIdx = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int l = i, r = i;
            int tmpLen = 0;
            // odd
            while(l >= 0 && r < s.length())
            {
                if (s[l] == s[r])
                {
                   tmpLen = r - l + 1;
                    if (tmpLen > longestLen)
                    {
                        longestLen = tmpLen;
                        startIdx = l;
                    }
                }
                else
                    break;
                l--;
                r++;
            }

            // even
            l = i, r = i+1;
            while(l >= 0 && r < s.length())
            {
                if (s[l] == s[r])
                {
                   tmpLen = r - l + 1;
                    if (tmpLen > longestLen)
                    {
                        longestLen = tmpLen;
                        startIdx = l;
                    }
                }
                else
                    break;
                l--;
                r++;
            }
        }

        string out(s, startIdx, longestLen);

        return out;
    }
};