#include<iostream>
using namespace std;
int main()
{
	//declaring variables
	int a,b,c;
	//asking for values
	cout<<"write three numbers"<<endl;
	//asigning values
	cin>>a;
	cin>>b;
	cin>>c;
	//giving condition
	if (a>b&&a>c)
	//printing result
	cout<<a<<" is the greatest number"<<endl;
	//giving second condition 
	else if (b>a&&b>c)
	//printing result
	cout<<b<<" is the greatest number"<<endl;
	//giving third condition
	else if (c>a&&c>b)
	//printing result
	cout<<c<<" is the greatest number"<<endl;
	//printing third condition
	cout<<a<<"="<<b<<"="<<c<<endl;

return 0;
}
