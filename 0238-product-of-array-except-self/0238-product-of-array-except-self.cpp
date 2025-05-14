// class Solution {
// public:
//     std::vector<int> productExceptSelf(std::vector<int>& nums) {
//         std::vector<int> ans;
//         int x = 1;

//         for (int i = 0 ; i < nums.size() ; i++) {
//             if (nums[i] == nums[i]) {
//                 for (int j = 0 ; j < nums.size() ; j++){
//                     x = x * nums[i];
//                 }
//                 ans.push_back(x);
//             } else {
//                 if (nums[i] != nums[i]) {

//                     ans.push_back(0);
//                 }
//             }
//         }

//         return ans;
//     }
// };




// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         std::vector<int> ans ;
//         int x = 1;
     

//         for (int i = 0 ; i < nums.size() ; i++){
//             for (int j = 0 ; j< nums.size() ; j++){
//                 if (nums[i]==nums[j]){
//                     ans.push_back(0);
//                 }
//                 else{

//                     x = x * nums[j];
//                     ans.push_back(x);  
                                    
//                 };
                
                

//             }
//             x=1;
//         }
//         return ans;
        
//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (nums.size(),1);


        for (int i = 1 ; i< n ; i++){
            ans[i]= ans[i-1]*nums[i-1];

        }
        int suf = 1;
        for (int i = n-2 ; i>= 0 ; i--){
            suf = suf*nums[i+1];
            ans[i] *= suf;
        }
        return ans;
        
    }
   
};