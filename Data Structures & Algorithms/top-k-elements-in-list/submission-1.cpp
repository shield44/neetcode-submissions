class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> freq;
        for(auto& [key,val]:mp){
            freq.push_back({val,key});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
