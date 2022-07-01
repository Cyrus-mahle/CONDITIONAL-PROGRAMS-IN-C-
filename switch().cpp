/*
switch statements in C++
Author:Nyakama Mahle Cyrus
*/
#include<iostream>
using namespace std;

int main(){
	
double  sellingPrice,costPrice;
int accessoryNumber;

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
switch(accessoryNumber){
    case 1:
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

   ;break;
   case 2:
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
	
   ;break;
   case 3:
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
   ;break;
    case 4:
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
   ;break;
   default:
   	cout<<"These are the only products in the system "<<endl;


}
}

