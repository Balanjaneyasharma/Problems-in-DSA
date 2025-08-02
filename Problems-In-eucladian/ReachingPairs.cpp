//Brute-Force
class Solution {
    public boolean reachingPoints(int sx, int sy, int tx, int ty) {
        if(sx==tx && sy==ty) return true;
        if(sx>tx || sy>ty) return false;
        return reachingPoints(sx, sx+sy, tx, ty) || reachingPoints(sx+sy, sy, tx, ty);
    }
}
//Optimal and intution 
class Solution {
public:
    /*int gcd(int x,int y){
        if(x==0) return y;
        if(y==0) return x;
        if(x<y) return gcd(x,y%x);
        return gcd(x%y,y);
    }*/
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while(sx < tx && sy < ty){
            if(tx<ty) ty=ty%tx;
            else tx=tx%ty;
        }
        return ( sy==ty&& sx<=tx &&  ((tx-sx)%sy==0) || sx==tx&& sy<=ty && ((ty-sy)%sx==0
                                                                      ) );
    }
};
