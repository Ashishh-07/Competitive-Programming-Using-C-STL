//Ashish_07
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	int a;
	int sum=0;
	vector <int> v1;
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";

	int result =  accumulate(v1.begin(),v1.end(),sum); 
	
	//Accumulate function is use to find sum between range->
	//v1.begin() -> 1st Element
	//v1.end() -> last Element
	//sum-> an int type variable showing initial value of "sum"
	
	
	cout<<"\n"<<"Sum is : "<<result;
	
	int min = *min_element(v1.begin(),v1.end()); //*min_element() is used to find smallest number in array/Vector.
	//return type is iterator to smallest number.
	int max = *max_element(v1.begin(),v1.end()); //*max_element() is used to find largest nuber in array /Vector.

	cout<<"\n"<<"Min_Value_in_Vector: "<<min;
	cout<<"\n"<<"Max_Value_in_Vector: "<<max;
	
	//to find sum of min and max number in array 
	int min_max = min+max;
	
	cout<<"\nSum of min and max number in vector is:"<<min_max<<" ";
	
	return 1;
}
