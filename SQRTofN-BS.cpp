#include <bits/stdc++.h>
using namespace std;





int findSqrt(int n) {


    int low = 1, high = n;
    
    while (low <= high) {

        long long mid = (low + high)/2;

        long long y = mid * mid;   

        if (y <= (long long)(n)) {   // check statement for BS 
            
            low = mid + 1; // left 
        }
        else {
            
            high = mid - 1; // right 
        }
    }
    return high;
}

int main()
{


    int n = 399;

    int ans = findSqrt(n);

    cout << "" << ans << "\n";

    return 0;
}