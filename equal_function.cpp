//ashish_07
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	int arr1[] = {1,2,3,4,5};
	vector<int> v;
	vector<int> v1;
	for(int i=1;i<=10;i++)
	{
		v.push_back(i);
		v1.push_back(i);
	}
	
	bool result = equal(arr,arr+5,arr1);
	bool result_vector = equal(v.begin(),v.end(),v1.begin());
	
	if(result)
		cout<<"\nBoth arrays are equal";
	else
		cout<<"\nBoth arrays are not equal";
		
	if(result_vector)
		cout<<"\nBoth Vectors are equal";
	else
		cout<<"\nBoth Vectors are not equal";
	
	
	return 1;
}
