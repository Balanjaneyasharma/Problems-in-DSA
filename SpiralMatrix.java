class Solution {
    public int[][] generateMatrix(int n) {
        int arr[][]= new int[n][n];
        int j = 1;
        int sr=0,er=n-1;
        int sc =0,ec=n-1;
        while(sr<=er&&sc<=ec){
            for(int i=sc;i<=ec;i++){
                arr[sr][i]=j;
                j++;
            }
            sr++;
            
            for(int i = sr;i <= er;i++){
                arr[i][ec]=j;
                j++;
            }
            ec--;
            
            for(int i = ec;i >= sc;i--){
                arr[er][i]=j;
                j++;
            }
            er--;
            
            for(int i = er;i>=sr;i--){
                arr[i][sc]=j;
                j++;
            }
            sc++;
               
        }
        
        return arr;
    }
}
