
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        n=n+1;
	    long long int seive[n];
        
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
        while(n!=1){
            maxi=max(maxi,seive[n]);
            //factors.insert(seive[n]);
            n=n/seive[n];
        }
        return maxi;
       
    }
};
