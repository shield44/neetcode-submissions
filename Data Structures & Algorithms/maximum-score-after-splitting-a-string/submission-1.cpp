class Solution {
public:
    int maxScore(string s) {
        int maxi=0;
        int left=0;
        for(int i=0;i<s.length()-1;i++){
            int right=0;
            if(s[i]-'0'==0) left+=1;
            for(int j=i+1;j<s.length();j++){
                if(s[j]-'0'==1) right+=1;
            }
            maxi=max(maxi,left+right);
        }
        return maxi;
    }
};