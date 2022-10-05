
#include<bits/stdc++.h>
using namespace std;

int main( ){
// Nesting Example Below...    
map<set<int>,int>m;
// Point to be Remembered is the in Map Key can be anything that canbe compared.
// Like even Set, Pairs, Can be Compared on the basis of thier 1st element and Onwards...
// example comparison of set, pair belike.
set<int>s = {1,2,3,3,5,6};  
set<int>s2 = {2,3,5,6,8,90};
cout << (s > s2) << endl;
// or With Pair the same like above...

// Nesting Good Example How to take input and Play with Data...
map<pair<string,string>, vector<int>> mp;
int n;
cout << " enter No. of Queries ";
cin >> n;
for(int i = 0; i< n; ++i){
 string fn,ln;
 int cnt;
 cout << "1st name" << " last name" << " count of no.of element";
 cin >> fn >> ln >> cnt;
 for(int j = 0; j<cnt ; j++ ){
    int x;
    cin >> x;
    mp[{fn,ln}].push_back(x);
 }
}

// Printing the Above Collected Data...
for(auto &pr : mp){
   pair<string,string> fullname = pr.first;
   vector list1 = pr.second;
 cout << fullname.first << " " << fullname.second << endl;;
 cout << list1.size( ) << endl;
 for(auto &element : list1){
  cout << element << " ";
 }
 cout << endl;
}



}