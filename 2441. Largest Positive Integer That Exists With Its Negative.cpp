class Solution {
public:
int findMaxK(vector<int>& nums){
        int n=nums.size();
        int res=-1;
        int arr[2001]={0};
        for(int i=0; i<n; i++){
            if(arr[-nums[i]+1000]==1){
                res=max(res,abs(nums[i]));
            }
            else{
                arr[nums[i]+1000]=1;
            }
        }
        return res;
    }
};
