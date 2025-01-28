class Solution {
public:
    vector<int> decrypt(vector<int>& a, int k) {
        int n = a.size();
        vector<int> ans(n,0);
        if(k==0)return ans;
        if(k>0){
            int sum = 0;
            int i =0;
            for(int i=0;i<k;i++){
                sum +=a[i+1%n];
            }
            for(int i=0;i<n;i++){
                ans[i] = sum;
                sum -= a[(i+1)%n];
                sum +=a[(i+1+k)%n];
            }
        }
        else{
            k = -k;
            int sum = 0;
            for(int i=n-k;i<n;i++){
                sum += a[i%n];
            }
            ans[0]=sum;
            for(int i =1;i<n;i++){
                
                sum -= a[(n + i - k-1)%n];
                sum += a[(n+i-1)%n];
                ans[i] = sum;

            }
        }
        return ans;
    }
};