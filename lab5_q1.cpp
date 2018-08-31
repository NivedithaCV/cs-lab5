#include<iostream>
using namespace std;
int main(){
	//declaring variable
	int a,b;
	//assigning value
	cout<<"write two numbers"<<endl;
	cin>> a;
	cin>> b;
	//condition
	if(a>b)
	//printing thje result
	cout<< a <<"is greater than" <<b<<endl;
	//second condition
	else if(a<b)
	//printing the result
	cout << b <<"is greater than"<< a<<endl;
	//third condition
	else 
	//printing the result
	cout<< a <<" is equal to "<<b<<endl;
	return 0;
}
