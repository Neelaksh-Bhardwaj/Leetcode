// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int marea = 0;
//         for (int i = 0; i < height.size(); i++) {
//             for (int j = i + 1; j < height.size(); j++) {
//                 int h = min(height[i], height[j]);
//                 int area = h * (j - i);
//                 marea = max(marea, area);
//             }
//         }
//         return marea;
//     }
// };



class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp = height.size()-1;
        int marea = 0;
        while (lp < rp){
            int h=min(height[lp],height[rp]);
            int area = h * (rp-lp);
            marea = max(area,marea);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return marea;
        
    }
};