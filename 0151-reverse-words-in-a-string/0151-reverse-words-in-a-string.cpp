class Solution {
public:
    string reverseWords(string s) {
       vector<string>v;
        string a="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(a);
            a="";}
            else{
             a+=s[i];
            }
        }
        v.push_back(a);
        a="";
        reverse(v.begin(),v.end());
        for(auto it:v){
            if(it==""){
                continue;
            }
            a+=it;
            a+=" ";
        }
        a.pop_back();
        return a;
    
    }
};