class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        for (int val : nums){
            int count=0;
            for (int ele : nums){
                if(ele == val){
                    count++;
                }
            }
            if(count > n/2){
                return val;
            }  
        }
        return -1;
    }
};