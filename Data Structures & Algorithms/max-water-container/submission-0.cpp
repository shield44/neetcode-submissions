class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=0;
                int h=min(heights[i],heights[j]);
                sum+=(j-i)*h;
                maxArea=max(maxArea,sum);
            }
        }
        return maxArea;
    }
};
