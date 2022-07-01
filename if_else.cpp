/*
if else statement in C++
syntax: if(condition){
         }
         execute if condition is true
         else{
         execute if condition is false
         }
}
*/
#include<iostream>
using namespace std;

int main(){
	string username;
	string password;
	cout<<"Enter username"<<endl;
	cin>>username;
	cout<<"Enter password"<<endl;
	cin>>password;
	
	if(username=="219295387@mywsu.ac.za" ||  password=="219295387"){
		cout<<"You have succesfully login to your account"<<endl;
	}
	else{
		cout<<"Wrong username or password "<<endl;	
	}
	
	return 0;
}

