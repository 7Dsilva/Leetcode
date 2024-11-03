#include<bits/stdc++.h>

using namespace std;


int rotated(vector<int>& arr, int n, int t){


int low = 0, high = n-1;


while(low <= high){


 int  mid = (low+high)/2;

if (arr[mid] == t) return mid;


if()




 // left sorted 



  if(arr[low] <= arr[mid]){

        if(arr[low] <= t && t <= arr[mid]){

        	high = mid-1;


        } else {

        	low = mid + 1;


        }

  }
 



// right sorted 
 else{  

 	 if(arr[mid] <= t && t <= arr[high]){

        	low = mid + 1;


        } else {

        	high = mid - 1;


        }



 }




}



return -1;

}

int main(){


    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};  // Example rotated sorted array
    int n = 9, t = 1;


    int ans = rotated(arr, n, t);

    if (ans == -1) 
        cout << "Element not found" << endl;
     else 
        cout << " here : "<< ans << endl;
    

    return 0;
	
}