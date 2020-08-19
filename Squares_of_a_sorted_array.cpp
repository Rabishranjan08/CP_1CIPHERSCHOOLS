class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>v1;
        for(int i=0;i<A.size();i++){
            int d=A[i]*A[i];
            v1.push_back(d);
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};
