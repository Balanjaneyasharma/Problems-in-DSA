class Solution{
  public:

bool isPrime(int n){
	    
	    for(int i=3;i<=sqrt(n);i++){
	        if(n%i==0) return false;
	    }
	    return true;
	}
	int isCircularPrime(int n) {
	    if(n==1) return 0;
	    if(n==2) return 1;
	    int digitcount=0;
	    int temp=n;
	    while(temp!=0){
	        if(temp%2==0) return 0;
	        temp/=10;
	        digitcount++;
	    }
	    int q=pow(10,digitcount-1);
	    while(digitcount!=0){
	        if(isPrime(n)==false) return 0;
	        int rem=n%10;
	        n=(q*rem)+(int)(n/10);
	        digitcount--;
	    }
	    return 1;
	     
	     
	    
	}
};
