class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        int needlelen = needle.length();
        for(int i = 0; i < haystack.length(); i++){
            int size = 0;
        if(haystack[i] == needle[0]){
            for(int j = 0;j < needlelen; j++){
                if(haystack[i+j] != needle[j])
                    break;
                else
                    size++;
                
                if(size==needlelen)
                    return i;
            }
            
        }
        }
        return -1;
    }
};