class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>ss;stack<char>tt;
        for(char c : s){
            if(c != '#')
                ss.push(c);
            else if(!ss.empty())
                ss.pop();
        }
        for(char c : t){
            if(c != '#')
                tt.push(c);
            else if(!tt.empty())
                tt.pop();
        }
        
        string sss = "";
        string ttt = "";
        // while( !ss.empty() && !tt.empty()){
        //     if(ss.top() != tt.top() )
        //         return false;
        //     else{
        //         sss +=ss.top();
        //         ttt+=tt.top();
        //         ss.pop();
        //         tt.pop();
        //     }
        // }
        while(!tt.empty() ){
            ttt+=tt.top();
            tt.pop();
        }
        while(!ss.empty() ){
            sss+=ss.top();
            ss.pop();
        }
        
        cout<<sss<<" "<<ttt;
        return (sss == ttt);
    }
};