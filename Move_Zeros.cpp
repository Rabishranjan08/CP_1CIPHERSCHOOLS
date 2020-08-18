class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int it=0,count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[it]=nums[i];
            it++;
        }
        else{
            count++;
        }  
    }
    
    while(it<n){
        nums[it]=0;
        it++;
    }
    }
};
