class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int size=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='('){
               size++;
               st.push(s[i]);
           }
          else{
              if(!st.empty()){
                st.pop();
                  size--;
              }
              else{
                  size++;
              }
          }
       }
       
        return size;
    }
};