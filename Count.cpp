//Ashish_07
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	int count_n =0;
	const int number =10;
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	
	count_n= count(v.begin(),v.end(),number); //Count number of matched items;
	
	for(int i = 0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n"<<number<<" is available "<<count_n<<" times";
		
	
	return 1;
	
}
