#include<bits/stdc++.h>
using namespace std;


int returnsubarraywithsum(vector<int> arr, int k){

int n = arr.size();

int cnt = 0;


for(int i=0;i<n;i++){



	for(int j=i;j<n;j++){


          int sum = 0;

          for(int k=i;k<=j;k++)


          	sum += arr[k];

          	if(sum==k)  
          		cnt++;
          	

          




	}
}


return cnt;

}

int main(){



 vector<int> arr = {1,2,3};



int k = 3; 


int x = returnsubarraywithsum(arr, k);

cout<<x<<endl;

return 0;






}