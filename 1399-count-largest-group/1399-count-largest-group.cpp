class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        map<int,int> f;
        for(int i= 1;i<=n;i++){
            f[sum(i)]++;
        }
        
        int m = 0,c = 0;
        for(auto &pair: f){
            if(pair.second > m){
                m = pair.second;
            }
        }
        for(auto &pair: f){
            if(pair.second== m){
                c++;
            }
        }
        return c;

    }
};