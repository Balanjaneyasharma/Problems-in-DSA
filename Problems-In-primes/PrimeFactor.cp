class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
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
        set<int>factors;
        while(n!=1){
            factors.insert(seive[n]);
            n=n/seive[n];
        }
        vector<int>factor(factors.begin(),factors.end());
        
        return factor;
        
	}
};
