#include<bits/stdc++.h>

using namespace std;


int main(){

vector<int> v = {10,15,24,28,18};


auto it = v.begin();


cout << *it <<endl;


it++;


cout << *it <<endl;




cout <<*(it+3);   // usefull 



// remember v.end() is the iterator to a non existent element 
// (after the last element)
























	return 0;
}