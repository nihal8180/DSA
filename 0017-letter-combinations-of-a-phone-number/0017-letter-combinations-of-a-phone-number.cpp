class Solution {
public:
void backtrack(const string &digits, const map<char, string> &mp, int index, string currentStr, vector<string> &res) {
        if (index == digits.size()) {
            res.push_back(currentStr);
            return;
        }

        string letters = mp.at(digits[index]);
        for (char letter : letters) {
            backtrack(digits, mp, index + 1, currentStr + letter, res);
        }
    }
       
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        map<char,string>mp;
        mp={    {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},{
                '5',"jkl"
            },
            {'6',"mno"},
            {
                '7',"qprs"
            },
            {'8',"tuv"},
            {'9',"wxyz"}
           };
    
        if(digits.size()!=0){
            backtrack(digits,mp,0,"",res);
        }
        return res;
    }
};