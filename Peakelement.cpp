#include<bits/stdc++.h>

using namespace std;




int peakelement(vector<int> &nums) {

    int n = nums.size(); 

    
    if (n == 1) return 0;

    if (nums[0] > nums[1]) return 0;

    if (nums[n - 1] > nums[n - 2]) return n - 1;

    // above casee eliminates edge case of first and last elements 

    int low = 1, high = n - 2;  // skip first n last


    while (low <= high) {

        int mid = (low + high) / 2;

        // mid is peak 
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])

            return mid;

        // increasing curve
        if (nums[mid] > nums[mid - 1]) low = mid + 1;

        
         // decreasing curve 
        else high = mid - 1;
    }
    
    return -1;
}

int main()
{
    vector<int> nums = {1,2,1,3,5,6,4};
    int ans = peakelement(nums);
    cout<< ans << "\n";
    return 0;
}