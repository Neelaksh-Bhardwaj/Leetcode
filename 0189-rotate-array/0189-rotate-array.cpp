// first reverse the whole array 
// then split the whole arr at k and then reverse both diffrently

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        k = k%n;

        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        
        l = 0;
        r = k-1;
        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }

        l = k;
        r = n -1;

        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }


    

    }

    
};

