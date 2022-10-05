#include<vector>
#include<iostream>
using namespace std;

int main ( ) {
 vector <int> :: iterator itna; 
 vector <pair<int,int>> vp = { {1 ,2}, {2,3} , {4,5 } };

 for(auto it : vp)
 cout << it.first << "  " << it.second << endl;; 


}