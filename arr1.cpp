/*
a={1,2,3}
b={2,3,4}
add={3,5,7}
sub={1,1,1}//b-a
*/
#include<iostream>
using namespace std;
int main()
{
	//program
	int a[3];
	int b[3];
	int add[3],sub[3];
	cout<<"enter the values of a array"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the values of b array"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>b[i];
	}
	cout<<"addition of a and b"<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=a[i]+b[i];
		cout<<add[i]<<" ";
	}
	cout<<"subtraction of a and b"<<endl;
	for(int i=0;i<3;i++)
	{
		sub[i]=b[i]-a[i];
		cout<<sub[i]<<" ";
	}
	return 0;
	
}
