class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool> hs ;
        for (int i =0;i< nums.size();i++){
            if(hs.find(nums[i])!=hs.end()){
                return nums[i];
            }
            hs[nums[i]] ;
            
        }
        return -1;
        
    }
};