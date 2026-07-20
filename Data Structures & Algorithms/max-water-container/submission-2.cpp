class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxAreas = INT_MIN;
        int l = 0,r = heights.size()-1;
        while(l<r){
            int h =  min(heights[l],heights[r]);
            int ca = h*(abs(l-r));
            maxAreas = max(ca,maxAreas);
            if(heights[l]<heights[r]) l++;
            else r--;
        }
        return maxAreas;
    }
};
