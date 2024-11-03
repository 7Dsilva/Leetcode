
#include <bits/stdc++.h>
using namespace std;

// Minimum in Rotated Sorted Array



int findMin(vector<int>& arr) {

    int low = 0, high = arr.size() - 1;

    int ans = INT_MAX; 

    while (low <= high) {

        int mid = (low + high) / 2;
        

        // space sorted so arr[low] is always min 

        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }

        //if left part sorted 
        if (arr[low] <= arr[mid]) {
            
            ans = min(ans, arr[low]); // min 

            // Eliminate left half:
            low = mid + 1;
        }
        else { 

        //right sorted 

            
            ans = min(ans, arr[mid]); //min

            // Eliminate right 
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int ans = findMin(arr);
    cout<< ans << "\n";
    return 0;
}