#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	vector<int> v;
	v.push_back(12);
	v.push_back(32);
	v.push_back(2);
	v.push_back(62);
	v.push_back(32);
	int search = 32;
	for(int i=0;i<v.size();i++)
	{
	cout<<"\nBefore Sort :"<<v[i]<<" ";
		
	}
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++)
	{
	cout<<"\nAfter Sort :"<<v[i]<<" ";
	}
	bool as = binary_search(v.begin(),v.end(),search);
	if(as)
		cout<<"\nElement is available";
	else
		cout<<"Elememt is not available";
	return 1;
}
