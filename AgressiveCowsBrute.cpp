#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int cows) {

    int n = stalls.size(); 


    int cntCows = 1; 
    int last = stalls[0]; //position of last placed cow
    for (int i = 1; i < n; i++) {
        if (stalls[i] - last >= dist) {

            cntCows++; 
            last = stalls[i]; //update the last location.
        }
        if (cntCows >= cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
    int n = stalls.size(); 

    //sort the stalls[]:
    sort(stalls.begin(), stalls.end());

    int limit = stalls[n - 1] - stalls[0];

    for (int i = 1; i <= limit; i++) {

        if (canWePlace(stalls, i, k) == false) {
            return (i - 1);
        }
    }
    return limit;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "maximum possible minimum distance : " << ans << "\n";
    return 0;
}

