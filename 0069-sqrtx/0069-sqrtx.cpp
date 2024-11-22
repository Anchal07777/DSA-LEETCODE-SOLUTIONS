class Solution {
public:
    int mySqrt(int x) {
        long long  i = 0;
        if(x==0 || x==1){
            return x;
        }
        while(i*i <= x){
            i++;
        }
        return i-1;
    }
};