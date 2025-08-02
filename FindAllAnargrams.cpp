class Solution {
public:
    bool anagram(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i])  return false;        
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(),m=p.size();
        vector<int>ans;
        int freqp[26];
        int freqw[26];
        for(int i=0;i<26;i++) {
            freqp[i]=0;
            freqw[i]=0;
        }
        if(m>n) return ans;
        for(int i =0;i<m;i++){
            freqp[p[i]-'a']+=1;
            freqw[s[i]-'a']+=1;
        }
        
        int left=0,right=m;
        while(left<n){
            //checking...
            if(anagram(freqp,freqw)) ans.push_back(left);
            //removing previous ...
            freqw[s[left]-'a']-=1;
            // adding  right...
            if (right<n) freqw[s[right]-'a']+=1;
            left++;
            right++;
        }
        return ans;
        
    }
};
