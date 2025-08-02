class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()>b.size()) return addBinary(b,a);
        int difference =b.size()-a.size();
        string padding="";
        for(int i=0;i<difference;i++){
            padding+='0';
        }
        a=padding+a;
        string ans="";
        char carry='0';
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]=='1'&& b[i]=='1'){
                if(carry=='0'){
                    ans='0'+ans;
                    carry='1';
                }
                else{
                    ans='1'+ans;
                    carry='1';
                }
            }
            else if(a[i]=='0'&& b[i]=='0'){
                if(carry=='0'){
                    ans='0'+ans;
                    carry='0';
                }
                else {
                    ans='1'+ans;
                    carry='0';
                }
            }
            else if(a[i]!=b[i]){
                if(carry=='0'){
                    ans='1'+ans;
                    carry='0';
                }
                else{
                    ans='0'+ans;
                    carry='1';
                }
            }
        }
        if(carry=='1') ans='1'+ans;
        return ans;
        
    }
};
