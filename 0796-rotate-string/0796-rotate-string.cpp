class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int size = s.size();
        for(int i = 0; i < size; i++){
            if(rotbyone( (s.substr(i)+s.substr(0,i)) ) == goal)
                return true;
        }
        return false;
    }
    string rotbyone(string s){
        cout<<(s.substr(1)+s[0])<<endl;
        return(s.substr(1)+s[0]);
    }
};