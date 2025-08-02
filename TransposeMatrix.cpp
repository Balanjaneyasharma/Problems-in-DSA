class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size() ; 
        int n = matrix[0].size() ;
        vector<vector<int>> transp;
        for(int i = 0 ;i<n ; i++){
            vector<int>mat;
            for(int j = 0 ; j < m ; j++){
                mat.push_back(matrix[j][i]);
            }
            transp.push_back(mat);
        }
        return transp;
        
    }
};
