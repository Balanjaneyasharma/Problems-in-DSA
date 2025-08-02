class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3){
             return 0;
        }
        int count = 0;
        int freq[26];
        for(int i = 0;i < 26 ;i ++){
            freq[i]=0;
        }
        int k = 3;
        for(int i = 0; i< k;i++){
            freq[s[i]-'a']+=1;
        }
        bool flg = true;
        for(int i = 0;i<26;i++){
            if(freq[i]>1){
                flg=false;
                break;
            }
        }
        if(flg) count+=1;
        for(int i = k;i<s.size();i++){
            flg =true;
            freq[s[i-k]-'a']-=1;
            freq[s[i]-'a']+=1;
            for(int  i = 0; i < 26;i++ ){
                if(freq[i]>1){
                    flg = false;break;
                }
            }
            if(flg) count++;
        }
        return count;
    }
}
