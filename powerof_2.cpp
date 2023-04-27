class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
        
    }   
};



//optimised solution 
int ans=1;
for(int i=0;i<=30;i++){
  ans=ans*2;
  if(ans==x){
    return true;
  }
}
return false;
