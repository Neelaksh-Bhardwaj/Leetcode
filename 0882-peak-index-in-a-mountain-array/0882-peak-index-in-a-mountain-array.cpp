class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size()-2;
        
        while(st<=end){
            int mid = st +(end-st)/2;
            //&& arr[mid]>arr[mid+1].  && arr[mid]<arr[mid+1] not necessary
            if (arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]){
                return mid;
            }
            else if (arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                st = mid+1;


            }
            else{
                end = mid-1;

            }
        }
        return -1;
        
    }
};