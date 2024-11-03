#include <bits/stdc++.h>


using namespace std;



bool containsDuplicate(vector<int> nums){


    unordered_set<int> set;

    for(int i=0;i<nums.size();i++){

    	set.insert(nums[i]);
    }

   // if set size is less than nums size then has to be a duplicate 

    if(set.size() < nums.size())  return true;


    else return false; 

}





int main(){


vector<int> nums {1,2,3,1};


bool x = containsDuplicate(nums);


if(x == 1) cout<<"true"<<endl;

else  cout<<"false"<<endl;


//


	return 0; 


}