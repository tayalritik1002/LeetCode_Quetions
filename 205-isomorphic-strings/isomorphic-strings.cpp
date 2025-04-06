class Solution {
public:
string solve_mapping(string s){
    unordered_map<char,char>m;
    char ans='a';
    string tem="";
    for(auto c:s){
        if(m.find(c)==m.end()){
            m[c]=ans;
            ans++;
        }
        tem+=m[c];
    }
    return tem;
}
    bool isIsomorphic(string s, string t) {

        string st1=solve_mapping(s);
        string st2=solve_mapping(t);
        return st1 == st2;
    }
};