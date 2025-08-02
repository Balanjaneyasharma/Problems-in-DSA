class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.size() < num2.size()) swap(num1,num2);
        int n1 = num1.size() ; 
        int n2 = num2.size() ;
        
        string ans = "";
        int sum ,carry = 0;
        char c ;
        while(n1 != 0){
            if(n2 != 0){
                sum = num1[n1-1] - '0' + num2[n2-1] - '0' + carry ;
                c = '0' + (sum%10);
                ans = c + ans ;
                if(sum >= 10) carry = 1;
                else carry = 0;
                n2 --;
            }
            else{ 
                sum = num1[n1-1]-'0' + carry ;
                c = '0' + (sum%10);
                ans = c + ans ;
                if(sum >= 10) carry = 1;
                else carry = 0;
            }
            n1 --;
        }
        if(carry > 0){
            c = '0' + carry ;
            ans = c+ ans;
        }
        return ans;
    }
};
