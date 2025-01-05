class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {

        // int row=shifts.size();
        // for(int i=0;i<row;i++){
        //     int st=shifts[i][0];
        //     int end=shifts[i][1];
        //     int dir=shifts[i][2];

        //     if(dir==0){
        //         for(int j=st;j<=end;j++){
        //             char c=s[j];
        //             if(c=='a')c='z';
        //             else c--;
        //             s[j]=c;
        //         }
        //     }
        //     else{
        //         for(int j=st;j<=end;j++){
        //             char c=s[j];
        //             if(c=='z')c='a';
        //             else c++;
        //             s[j]=c;
        //         }
        //     }
        // }
        // return s;

       unordered_map<char, int> mp;
        for (int i = 'a', j = 0; i <= 'z'; i++, j++) {
            mp[i] = j;
        }

        // Create a prefix array to track net shifts for each position
        vector<int> netShifts(s.size() + 1, 0);

        // Apply the shifts to the prefix array
        for (auto& it : shifts) {
            int start = it[0];
            int end = it[1];
            int direction = it[2];

            // Forward shift: increment the range
            if (direction == 1) {
                netShifts[start] += 1;
                netShifts[end + 1] -= 1;
            }
            // Backward shift: decrement the range
            else {
                netShifts[start] -= 1;
                netShifts[end + 1] += 1;
            }
        }

        for(auto i:netShifts){
            cout<<i<<" ";
        }

        int cumulativeShift = 0;
        for (int i = 0; i < s.size(); i++) {
            cumulativeShift += netShifts[i];

            // Calculate the new character position
            int currentIndex = mp[s[i]];
            int newIndex = (currentIndex + cumulativeShift) % 26;

            // Handle negative indices by adding 26
            if (newIndex < 0) {
                newIndex += 26;
            }

            // Update the character in the string
            for (auto& pair : mp) {
                if (pair.second == newIndex) {
                    s[i] = pair.first;
                    break;
                }
            }
        }

        return s;




    }
};