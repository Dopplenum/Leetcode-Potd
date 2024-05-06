class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j){
            if(nums[i]+nums[j]<=k){
                cnt++;
                i++;
                j--;
            }
            else{
                cnt++;
                j--;
            }
        }
        return cnt;
    }
};
