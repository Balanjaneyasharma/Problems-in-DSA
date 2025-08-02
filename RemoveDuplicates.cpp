class Solution{
public:	
		
	string removeDups(string S) 
	{
	   int hash[123]={0};
	   string ss="";
	   for(int i=0;i<S.size();i++)
	   {
	       if(hash[S[i]]==0)
	       {
	           hash[S[i]]=1;
	           ss+=S[i];
	       }
	   }
	   return ss;
	}
};
