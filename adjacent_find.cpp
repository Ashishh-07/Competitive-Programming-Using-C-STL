//ashish_07
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	vector<int> v1;
	for( int i = 0; i < 10; i++ ) 
	{
	v1.push_back(i);
	if( i == 7 ) 
	{
	v1.push_back(i); 
	}
	}
	for(int i=0;i<10;i++)
	{
		cout<<v1[i]<<" ";
	}
	vector<int>::iterator result; //iterator to storing result 
	
	result = adjacent_find( v1.begin(), v1.end()); //Method to find if there are any same element adjacent to each other
	
	if( result == v1.end() )
	 {
	 cout << "\nDid not find adjacent elements in v1" << endl;
	 } 
	 else 
	 {
	 cout << "\nFound matching adjacent elements starting at " << *result<< endl;
	 } 
	
	
	return 1;
	
}
