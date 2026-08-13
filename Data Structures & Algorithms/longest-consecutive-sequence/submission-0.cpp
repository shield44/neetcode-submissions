class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> hash(nums.begin(),nums.end());
        int cnt=0;
        int len=0;
        for(int i=0;i<n;i++){
            if(hash.find(nums[i]-1)==hash.end()){
                int x=nums[i];
                cnt=1;
                while(hash.find(x+1)!=hash.end()){
                    x++;
                    cnt++;
                }
            }
            len=max(len,cnt);
        }
        return len;
    }
};
