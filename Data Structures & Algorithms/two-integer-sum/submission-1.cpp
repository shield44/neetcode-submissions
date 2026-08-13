class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> nInd;
        for(int i=0;i<n;i++){
            nInd.push_back({nums[i],i});
        }
        sort(nInd.begin(),nInd.end());
        int left=0,right=n-1;
        while(left<=right){
            int sum=nInd[left].first+nInd[right].first;
            if(sum==target){
                if(nInd[left].second<nInd[right].second) return {nInd[left].second,nInd[right].second};
                else return {nInd[right].second,nInd[left].second};
            }
            else if(sum<target){
                left++;
            }
            else {
                right--;
            }
        }
        return {-1,-1};
    }
};
