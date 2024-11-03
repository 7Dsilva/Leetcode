#include<bits/stdc++.h>

using namespace std;




int singleelement(vector<int>& arr) {

    int n = arr.size(); 

    
    if (n == 1) return arr[0];    // if arr is of 1 

    if (arr[0] != arr[1]) return arr[0];    

    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];     // first n last element 


    int low = 1, high = n - 2;  //start

    while (low <= high) {

        int mid = (low + high) / 2;

        // if mid is the single element 
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

          // left detection 
        // mid elements's left mid-1 is odd  OR mid+1 is even 
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            //eliminate left 
            low = mid + 1;
        }
        
        else {
            //eliminate right
            high = mid - 1;
        }
    }

    
    return -1;
}




int main()
{
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
   int ans = singleelement(arr);
   cout<< ans << "\n";
    return 0;
}
