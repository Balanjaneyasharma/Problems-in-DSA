class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tr=(int)target;
        
        int l=0,r=letters.size()-1;
        int size=r;
        if(tr>=(int)letters[r]){
            return letters[0];
        }
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            int val=(int)letters[mid];
            if(val==tr){
                int i=mid+1;
                while(i<size&&letters[mid]==letters[i]){
                    i+=1;
                }
                return letters[i];
            }
            else if(val<tr) l=mid+1;
            else if(val>tr) r=mid-1;
        }
        return letters[l];
        
        
    }
};
