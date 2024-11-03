#include<bits/stdc++.h>

using namespace std;


vector<vector <int>> triplet(int n, vector<int> &num){

// 3SUM 

	
set<vector<int>> st

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){


       for(int k=j+1;k<n;k++){

             if(num[i] + num[j] + num[k] == 0){

             	vector<int> temp = {num[i], num[j], num[k]};

             	sort(temp.begin(), temp.end());

             	st.insert(temp);


             }

       }

     }




}







vector<vector<int>> ans(st.begin(), st.end());

return ans;













}