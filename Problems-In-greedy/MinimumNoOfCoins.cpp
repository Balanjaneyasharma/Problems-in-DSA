class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>denom={1,2,5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int>ans;
        int i = 0;
        for( i = 0 ;  i < denom.size();i++){
            if(denom[i]>N){
                break;
            }
        }
        i = i-1;
        while(N>0 && i>=0){
            if(denom[i]<=N){
                ans.push_back(denom[i]);
                N = N - denom[i];
            }
            else i = i-1;
        }
        return ans;
        
    }
};
