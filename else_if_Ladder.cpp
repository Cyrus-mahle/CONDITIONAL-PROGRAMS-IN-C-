/*
if else ladder statement in C++
syntax:
if(condition1){
 execute statement1
 else if(condition2){
 execute statement2
 else if(condition3){
 execute statement3
 else{
   execute statment
  }
  * it executes one condition that is true from the top at a time
  * if all conditions are false then else part will execute
  * 
*/
#include<iostream>
using namespace std;

int main(){
	
double  sellingPrice,costPrice;
int accessoryNumber;
do{
cout<<"_________________________________________________________________________"<<endl;
cout<<"                       |Cyrus Computer Accessories  |                   |"<<endl; 
cout<<"*************************************************************************"<<endl;
cout<<"|1:Ethernet cable                    |"<<endl;
cout<<"|selling Price:RR200                 |"<<endl;
cout<<"|cost price:R150                     |"<<endl;
cout<<"|                                    |"<<endl;
cout<<"|2: 1Terrabyte external hard drive   |"<<endl;
cout<<"|selling Price:R1000                 |"<<endl;
cout<<"|cost price:R850                     |"<<endl;
cout<<"|                                    |"<<endl;
cout<<"|3: HDMI port                        |"<<endl;
cout<<"|selling Price:R300                  |"<<endl;
cout<<"|cost price:R400                     |"<<endl;
cout<<"|                                    |"<<endl;
cout<<"|4: J45 port                         |"<<endl;
cout<<"|selling Price:R500                  |"<<endl;
cout<<"|cost price:R500                     |"<<endl;
cout<<"*************************************************************************"<<endl;
cout<<"_________________________________________________________________________"<<endl;
cout<<"Enter accessorry number "<<endl;
cin>>accessoryNumber;
cout<<"Enter Selling Price"<<endl;
cin>>sellingPrice;
cout<<"Enter Cost Price"<<endl;
cin>>costPrice;
double profit;
double loss;
if(accessoryNumber==1){

	cout<<"Product       :Ethernet Cable "<<endl;
	cout<<"Selling Price :"<<sellingPrice<<endl;
	cout<<"Cost Price    :"<<costPrice<<endl;
		if(sellingPrice>costPrice){
	profit=sellingPrice-costPrice;
	cout<<"Profit        :R"<<profit<<endl;
           }
	else if(costPrice>sellingPrice){
    loss=costPrice-sellingPrice;
    cout<<"loss          :R"<<loss<<endl;
    }
	else{
        cout<<"No loss, No Profit selling price=costPrice"<<endl;
	}
   }
   else if(accessoryNumber==2){
   	cout<<"Product       :1Terrabyte External hard drive "<<endl;
   	cout<<"Selling Price :"<<sellingPrice<<endl;
	cout<<"Cost Price    :"<<costPrice<<endl;
			if(sellingPrice>costPrice){
	profit=sellingPrice-costPrice;
	cout<<"Profit        :R"<<profit<<endl;
           }
	else if(costPrice>sellingPrice){
    loss=costPrice-sellingPrice;
    cout<<"loss          :R"<<loss<<endl;
    }
	else{
        cout<<"No loss, No Profit selling price=costPrice"<<endl;
	}
	
   }
  else if(accessoryNumber==3){
   	cout<<"Product       :HDMI Port "<<endl;
   	cout<<"Selling Price :"<<sellingPrice<<endl;
	cout<<"Cost Price    :"<<costPrice<<endl;
			if(sellingPrice>costPrice){
	profit=sellingPrice-costPrice;
	cout<<"Profit        :R"<<profit<<endl;
           }
	else if(costPrice>sellingPrice){
    loss=costPrice-sellingPrice;
    cout<<"loss          :R"<<loss<<endl;
    }
	else{
        cout<<"No loss, No Profit selling price=costPrice"<<endl;
	}
   }
    else if(accessoryNumber==4){
   	cout<<"Product       :J45 Port "<<endl;
   	cout<<"Selling Price :"<<sellingPrice<<endl;
	cout<<"Cost Price    :"<<costPrice<<endl;
    		if(sellingPrice>costPrice){
	profit=sellingPrice-costPrice;
	cout<<"Profit        :R"<<profit<<endl;
           }
	else if(costPrice>sellingPrice){
    loss=costPrice-sellingPrice;
    cout<<"loss          :R"<<loss<<endl;
    }
	else{
        cout<<"No loss, No Profit selling price=costPrice"<<endl;
	}
   }
   else{
   	cout<<"These are the only products in the system "<<endl;
   }
}while(accessoryNumber);



}


	

