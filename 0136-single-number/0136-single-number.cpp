class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int unq=0;
        for (int val : nums){
            unq = unq ^ val;
        }
        return unq;
        
    }
};