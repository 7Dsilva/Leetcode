#include<bits/stdc++.h>


using namespace std;



int main(){


vector<string> names = {"alice", "Dan","collin", "Darren", "Phil", "kim", "Darren"};



unordered_map<string, int> countMap ;


for(string& name: names){


	if(countMap.count(name) == 0){

		countMap[name] == 1;
	}   else {

        countMap[name]++;
	}
}

















	return 0;
}