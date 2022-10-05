#include<iostream>
#include<vector>
using namespace std;

int main( ) {
vector <vector <int>> v;
int n,m;
cout << "enter No. of Rows" << endl;
cin >> n;

cout << "enter No. of Cols" << endl;
cin >> m;

// Nesting into Vectors in 2 methods 
// One by either declaring a temporary vector in the forloop and push it into vector of vector
// Second is declaring a empty vector in every rows loop and pushingback elemnts into init. 
// the Key is to Imagine What does, v[i] represent and replace it with the vector or something etc.. in mind. 
for( int i = 0; i< n ;i++ ){
 vector <int> temp; // v.push_back( vector<int> ( ));
for( int j = 0; j< m ; j++){
 cout << "enter the " << j << " element of the " << i << " row" << endl;
 int x; 
 cin >> x;     
  temp.push_back(x); // v[i].push_back(x); 
}
  v.push_back(temp);
}

for(int  i = 0; i < n ; i++){
for(int  j = 0; j < m ; j++)
cout << v[i][j] << " ";

cout << endl;
}


}