class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,h=(n*m)-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m]>target) h=mid-1;
            else l=mid+1;
        }
        return false;
        
    }
};
