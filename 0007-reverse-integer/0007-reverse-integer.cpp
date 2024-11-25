class Solution {
public:
    int reverse(int x) {
        long long i=to_string(abs(x)).length()-1,rem=0,ans=0;
        int sign = (x>0)?1:-1;
        while(x!=0 && i>=0){
            rem = abs(x)%10;
            rem *= pow(10,i);
            ans += rem;
            i--;
            x/=10;
        }
        ans *= sign;
        if(ans> INT_MAX || ans< INT_MIN) return 0;
        return ans;
    }
};