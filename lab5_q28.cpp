#include<iostream>
using namespace std;
int main(){
	//declaring variable and assigning value
	int i,n,sum;
	i=2;
	cout<<"write the value of n";
	cin>>n;
	//condition
	{
	for(i=2;i<=n;i=i+2)
	//finding sum
	 sum +=i;
 
	}
	//printing result
	cout<<"sum is"<<sum<<endl;
	return 0;
}	
