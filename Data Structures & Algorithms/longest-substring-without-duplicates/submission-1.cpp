class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> charMap;
        int l=0,res=0;
        for(int r=0;r<s.size();r++){
            if(charMap.find(s[r])!=charMap.end()){
                l=max(charMap[s[r]]+1,l);
            }
            charMap[s[r]]=r;
            res=max(res,r-l+1);
        }
        return res;
    }
};
