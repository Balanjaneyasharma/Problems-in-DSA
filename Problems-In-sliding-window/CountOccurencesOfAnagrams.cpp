class Solution{
public:
	int search(string pat, string txt) {
	    int ptr[26]={0};
	    int text[26]={0};
	    int k = pat.size();
	    int n = txt.size();
	    if(k>n) return -1;
	    for(int i = 0; i < k; i ++){
	        ptr[pat[i]-'a']+=1;
	        text[txt[i]-'a']+=1;
	    }
	    int count = 0;
	    bool flg = true;
	    for(int i = 0 ; i < 26 ;i++){
	        if(ptr[i]!=text[i]){
	            flg =false;
	            break;
	        }
	    }
	    if(flg == true) count+=1;
	    for(int i = k; i < n ; i++){
	        text[txt[i-k]-'a']-=1;
	        text[txt[i]-'a']+=1;
	        flg = true;
	        for(int i = 0 ; i < 26 ;i++){
	            if(ptr[i]!=text[i]){
	                flg =false;
	                break;
	            }
	        }
	        if(flg == true) count+=1;
	    }
	    return count;
	}
};
