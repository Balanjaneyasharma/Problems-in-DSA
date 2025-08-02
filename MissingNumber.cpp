class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        for(int i=1;i<=n;i++){
            array.push_back(i);
        }
        int el=array[0];
        for(int i=1;i<array.size();i++){
            el=el^array[i];
        }
        return el;
    }
}
