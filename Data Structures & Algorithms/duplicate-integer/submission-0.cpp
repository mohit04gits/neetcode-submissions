class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int sizeNum = nums.size();
        set<int>s;
        for(int num : nums){
            s.insert(num);
        }
        int setSize = s.size();
        if(setSize<sizeNum) return true;
        else return false;
    }
};