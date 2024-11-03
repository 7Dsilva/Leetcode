#include<bits/stdc++.h>

using namespace std;




int lowerbound(vector<int> arr, int n, int x){


int ans = n;


int low = 0;
int high = n-1;


int mid = (low+high)/2;


while(low<=high){

 if(arr[mid] >= x){


 	ans = mid;

 	high = mid - 1;


 } else{

     low = mid + 1;




 }
}


return ans;

}


int main(){

 vector<int> arr = {1,2,8,10,11,12,19};

 int n = arr.size(); 
 int x = 5;

 int y = lowerbound(arr, n, x);

 cout<<y<<endl;




return 0;

}