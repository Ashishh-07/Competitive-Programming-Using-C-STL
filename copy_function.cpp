//Ashish_07
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	vector<int> v;
	vector<int> t(4);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	copy(v.begin(),v.end(),t.begin()); //Copy function to copy all elements from source to destination 
	
	for(int i = 0; i<t.size(); i++)
	{
		cout<<t[i]<<" ";
	}
		
	
	return 1;
	
}
