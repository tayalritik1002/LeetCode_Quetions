class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        stringstream ss(s);
        string word;

        
        while(ss >> s){
            words.push(s);

        }
        while(!words.empty()){
            word+=words.top();
            words.pop();
            if(!words.empty())word+=" ";
        }
        return word;

        
    }
};