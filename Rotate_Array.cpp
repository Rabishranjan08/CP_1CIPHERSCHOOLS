class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d=k+1;
        if(k>nums.size() &&nums.size()==1)
            return;
        if(k>nums.size()){
            k=k%nums.size();
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());     
    }
};
