#include<iostream>
using namespace std;
int main(){
	int marks=100;
	int obtained;

try{

	cout<<"Enter your marks."<<endl;
	cin>>obtained;
	if(obtained==0)
		throw string("You enter char");
	if(obtained>marks){
		throw string("Invalid input!");
	}
//		sum(2);
//		sum(2.5);
	if(obtained>70){
		cout<<"Congrats, you are pass"<<endl;
	}
	else if(obtained>=50&&obtained<=70){
		cout<<"Fear";
	}
	else{
		cout<<"Oops, You are fail.."<<endl;
	}
	
}
catch (string e)
{
	cout<<e;
}
	
	
	
	
	
	return 0;
	
}