class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> map(nums.size(),0);
        for(int num : nums){
            map[num]++;
            if(map[num]>1) return num;
        }
        // for(int x : map){
        //     //if(x.second > 1) return x.first;
        //     if(map[x]>1) return x;
        // }
        return -1;
    }
};
