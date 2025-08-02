class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()==0||s.size()==1) return s;
        int i=0;
        int n =s.size();
        cout<<n<<endl;
        if(k>=n){
            reverse(s.begin(),s.end());
            return s;
        }
        for(int j =0;j<n;j++){
            if(((j-i)+1)==2*k){
                reverse(s.begin()+i,s.begin()+(i+k));
                i=j+1;
            }
        }
        cout<<i<<endl;
        int rem = n%((2*k));
        if(rem<k) reverse(s.begin()+i,s.begin()+n);
        else if( rem<2*k)reverse(s.begin()+i,s.begin()+(i+k));
            

        return s;
    }
}
