#include<bits/stdc++.h>



using namespace std;



int main(){



pair<int,int> p = {7, 8};    // pair of int int  


cout << p.first << " " << p.second <<endl;


pair<int,string> x = {7,"Pairs"};     // int string 


cout << x.second <<endl;





pair<int, pair<int, string>> z = {95, {10,"Pairs"}};



cout << z.second.first << endl;


// z.second.first: Accesses the first element of the inner pair (the integer 10).
// z.second.second: Accesses the second element of the inner pair (the string "Pairs")





























	return 0; 

}