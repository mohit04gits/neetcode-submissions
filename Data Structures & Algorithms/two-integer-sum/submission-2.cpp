class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int i =0,c;
        for(i ;i<nums.size();i++){
            c = target - nums[i];
            if(!map.count(c)){
                map[nums[i]] = i;
            }else{
                return {map[c],i};
            }
        } 
        
    }
};
