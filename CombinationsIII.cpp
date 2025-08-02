class Solution {
public:
    void recursion(int index ,int n ,int k ,vector<vector<int>>&ans, vector<int>&ds ,vector<int>data){
	   // we may get subset having sum eqauls target even in lesser size than k so we also check ds size
        if(n == 0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
		// if ds length exceeds given k ,it deoesnt required 
        if(ds.size() >= k) return;
		// index should be in range from 0 to data.size -1 ;
        if(index >= data.size()) return;
		// pick logic 
        if(data[index]<=n){
            ds.push_back(data[index]);
            recursion(index+1,n-data[index],k,ans,ds,data);
			// make sure you popback for non pick 
            ds.pop_back();
        }
		// Non - Pick Logic
        recursion(index+1,n,k,ans,ds,data);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> data;
        for(int i = 1 ; i <= 9 ; i ++ ){
            data.push_back(i);
        }
        vector<vector<int>> ans;
        vector<int>ds;
        recursion(0,n,k,ans,ds,data);
        return ans;
        
    }
}


// another way slight change ....

class Solution {
public:
    void recursion(int index ,int n ,int k ,vector<vector<int>>&ans, vector<int>&ds){
	
	   // we may get subset having sum eqauls target even in lesser size than k so we also check ds size
        if(n == 0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
		// if ds size exceeds given size we dont required it 
        if(ds.size() >= k) return;
		// index in the range 1 to 9 given constraint
        if(index >= 10) return;
		// Pick Logic 
        if(index<=n){
            ds.push_back(index);
            recursion(index+1,n-index,k,ans,ds);
			// after pick make sure you pop it
            ds.pop_back();
        }
		// Non-Pick Logic
        recursion(index+1,n,k,ans,ds);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>ds;
        recursion(1,n,k,ans,ds);
        return ans;
        
    }
};























