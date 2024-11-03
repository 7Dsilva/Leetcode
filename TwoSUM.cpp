#include<bits/stdc++.h>

using namespace std;

// using maps 


vector<int> twosum(vector<int> &nums, int target){

	int n = nums.size();
     
     sort(nums.begin(), nums.end());




       int left = 0,right = n-1;

       while(left<right){

          int sum = nums[left] + nums[right];

         if(sum == target){

         	return {nums[left], right};
         }

         else if(sum<target) left++;

         else right--;

       }

     return {-1, -1};

}


int main(){


	
vector<int> nums = {2,7,11,15};

int target = 9;











	return 0;


}