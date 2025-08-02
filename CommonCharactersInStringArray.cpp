#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>vec;
        int arr[words.size()][26];
        for(int i=0;i<words.size();i++){
            for(int j=0;j<26;j++){
                arr[i][j]=0;
            }
        }
        string s;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            for(int j=0;j<s.size();j++){
                arr[i][s[j]-97]+=1;
            }
        }
        /*for(int i=0;i<words.size();i++){
            for(int j=0;j<26;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/
        
        for(int j=0;j<26;j++){
            if(arr[0][j]!=0)
            {
                char c=97+j;
                //bool flg=false;
                int mini=arr[0][j];
                for(int pos=1;pos<words.size();pos++){
                    mini=min(mini,arr[pos][j]);
                }
                if(mini!=INT_MAX){
                    while(mini--){
                        string s="";
                        s+=c;
                        vec.push_back(s);
                    }
                }
                
            }
            
        }
     
    return vec;       
    }
    
};
