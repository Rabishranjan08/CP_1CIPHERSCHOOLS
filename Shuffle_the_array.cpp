class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int d=nums[i];
            int d1=nums[i+n];
            v.push_back(d);
            v.push_back(d1);
        }
        return v;
    }
};
