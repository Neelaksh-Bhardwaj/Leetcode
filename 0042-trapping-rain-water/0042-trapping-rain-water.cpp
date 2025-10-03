//two pointer

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0 ;
        int right = height.size()-1;
        int l_max = height[left];
        int r_max = height[right];
        int res = 0;
        while (left < right){
            if(l_max < r_max){
                left++;
                l_max = max(l_max,height[left]);
                res = res + (l_max-height[left]);
            }
            else{
                right--;
                r_max = max(r_max,height[right]);
                res = res + (r_max-height[right]);

            }

        }
        return res;
        
    }
    
};