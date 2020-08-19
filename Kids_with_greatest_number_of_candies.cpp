class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=*max_element(candies.begin(),candies.end());
        int d=maxx+extraCandies;
        vector<bool>v1;
        for(int i=0;i<candies.size();i++){
            if((maxx-candies[i])<=extraCandies){
                v1.push_back(1);
            }
            else{
                v1.push_back(0);
            }
        }
        return v1;
    } 
};
