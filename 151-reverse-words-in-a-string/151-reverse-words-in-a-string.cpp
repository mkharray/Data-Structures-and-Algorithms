class Solution {
public:
    string reverseWords(string s) {
        string fin = "";
        string str = "";
        int flag = 0;
        s = s+" ";
        for(auto ch : s){
            if(flag == 1 && ch == ' '){
                flag = -1;
                str += ' ';
                fin = str + fin;
                str = "";
            }
            else if (ch != ' '){
                str += ch;
                flag = 1;
            }
            
        }
        fin = fin.substr(0,fin.size()-1);
        return fin;
    }
};