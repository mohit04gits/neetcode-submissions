class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        for(auto &x : map){
            if(x.second > 1) return x.first;
        }
    }
};
