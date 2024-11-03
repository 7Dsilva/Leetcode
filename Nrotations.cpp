#include <bits/stdc++.h>
using namespace std;

int findrotations(vector<int> &arr) {

    int low = 0, high = arr.size() - 1;

    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        
        if (arr[low] <= arr[mid]) {
            
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];  // just store low n its index 
            }

            
            low = mid + 1;
        }
        else { 

            
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findrotations(arr);
    cout << ans <<endl;
    return 0;
}