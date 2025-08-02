class Solution{
public:
    int kthPrime(int n, int k){
        if(n==0||n==1) return -1;
        n=n+1;
	    int seive[n];
        seive[0]=seive[1]=0;
        for(int i=2;i<n;i++)
        {
            seive[i]=i;
        }
        for(int i=2;i*i<n;i++)
        {
            if(seive[i]==i)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    if(seive[j]==j) seive[j]=i;
                } 
            }
        }
        n=n-1;
        long long int maxi=0;
        vector<int>factors;
        while(n!=1){
            factors.push_back(seive[n]);
            n=n/seive[n];
        }
        
        if(k>factors.size()) return -1;
        return factors[k-1];

    }
};
