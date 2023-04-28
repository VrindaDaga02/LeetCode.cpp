class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> res;
        sort(arr.begin(),arr.end());
        int i=0;
        
        
        while(i<arr.size()){
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            i=i+count;
            res.push_back(count);
            
        }
        
        
        sort(res.begin(),res.end());
        for(int j=0;j<res.size()-1;j++){
            if(res[j]==res[j+1]){
                return false;
            }
        }
        return true;
        
        
    }
};
