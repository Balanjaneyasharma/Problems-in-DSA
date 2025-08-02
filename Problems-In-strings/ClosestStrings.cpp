class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		int index1 = -1,index2 = -1;
		int mini = INT_MAX;
		for(int i = 0 ; i < s.size();i++){
		    if(s[i] == word1) index1 = i;
		    if(s[i] == word2) index2 = i;
		    if(index1 != -1 && index2 != -1) mini = min(mini,abs(index1 - index2));
		}
		return mini;
	}
};
