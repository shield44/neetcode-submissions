class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>> freq;
        for(auto& [key,val]:mp){
            freq.push({val,key});
        }
        vector<int> ans;
        while(k--) {
            ans.push_back(freq.top().second);
            freq.pop();
        }
        return ans;
    }
};
