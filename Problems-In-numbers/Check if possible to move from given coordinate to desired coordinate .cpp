class Solution {
  public:
  int gcd(int x,int y){
      if(x<0) x=-1*x;
      if(y<0) y=-1*y;
      if(x==0) return y;
      if(y==0) return x;
      if(x<y) return gcd(x,y%x);
      else return gcd(x%y,y);
  }
    int isPossible(int x, int y, int a, int b) {
        if(gcd(a,b)==gcd(x,y)){
            return 1;
        }
        return 0;
    }
};
