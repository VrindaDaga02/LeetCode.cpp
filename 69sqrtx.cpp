class Solution {
public:
    int BinarySearch(int n){
        long long int s=0;
        long long int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int sq=mid*mid;
            if(sq==n){
                return mid;
            }
            else if(sq<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        int a=BinarySearch(x);
        return a;


        
    }
};
