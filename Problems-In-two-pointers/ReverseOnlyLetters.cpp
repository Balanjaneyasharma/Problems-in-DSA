class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            while(!(isalpha(s[l]))&&l<r) l++;
            while(!(isalpha(s[r]))&&r>l) r--;
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};
