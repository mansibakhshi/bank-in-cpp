/*Program to generate a bank account using the following class:
Implement the following features of OOPs:
 1.Encapsulation
 2.Abstraction
 3.Data Hiding */

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>



class Account
{
	char name[20] ;
	int acc_no ;
	float balance ;

	public:

	void init() ;  //takes the name and acc no. from the user
	void deposit(float amt) ; //adds amount to existing balance
	void withdraw(float amt) ; //withdraws amount from balance
	void show() ;  //displays details
	Account()
	{
		balance=0.0 ;  //minimum balance is 0
	}
} ;

void Account::init()
{
	cout<<"\t\tPLEASE PROVIDE THE DETAILS FOR OPENING YOUR ACCOUNT\t\t";
	cout<<endl<<endl ;
	cout<<"\nEnter the name: " ;
	gets(name) ;
	cout<<"\nYour unique account number is: " ;
	cout<<acc_no ;
	cout<<endl<<endl ;
	cout<<"\n\t\t\tTHANK YOU FOR JOINING US!!" ;
	cout<<"\t\t\t\t\t\t\t\tHAVE A NICE DAY!!" ;


}

void Account::deposit(float amt)
{
	cout<<"\nEnter the amount you wish to deposit: " ;
	cin>> amt ;
	balance = balance + amt ;
	cout<<"\n Your current balance is: " ;
	cout<<"$ "<<balance ;
	cout<<endl<<endl ;
	cout<<"\t\t\t\tTHANK YOU!!" ;
	cout<<"\n\t\tWE LOOK FORWARD TO WORKING WITH YOU AGAIN." ;
	cout<<"\n\t\t\t\tHAVE A NICE DAY!!" ;

}

void Account::withdraw(float amt)
{
	cout<<"\nEnter the amount you wish to withdraw: " ;
	cin>>amt ;
	if((balance-amt)<100)
	{
		cout<<"\nSORRY!! YOU HAVE TO MAINTAIN MINIMUM BALANCE $ 100" ;
		cout<<"\n Your current balance is: " ;
		cout<<"$ "<<balance ;
		cout<<endl ;
	}
	else
	{
		balance= balance - amt ;
		cout<<"\n Your current balance is: " ;
		cout<<"$ "<<balance ;
		cout<<endl<<endl ;
		cout<<"\n\t\t\t\tTHANK YOU!!" ;
		cout<<"\n\t\tWE LOOK FORWARD TO WORKING WITH YOU AGAIN." ;
		cout<<"\n\t\t\t\tHAVE A NICE DAY!!" ;

	}
}

void Account::show()
{
	cout<<"\t\t\tDISPLAYING ACCOUNT DETAILS\t\t" ;
	cout<<endl<<endl ;
	if(balance==0)
	{
		cout<<"\nSORRY!! YOU DO NOT HAVE AN ACCOUNT." ;
		cout<<"PLEASE OPEN AN ACCOUNT." ;
	}
	else
	{
		cout<<"\nThe details are: " ;
		cout<<endl<<"\t\t\tAccount number:  "<<acc_no ;
		cout<<endl<<"\t\t\tName:  "<<name ;
		cout<<endl<<"\t\t\tCurrent Balance:  "<<"$ "<<balance ;
	}
}

int main()
{
	Account a ;

	float amt ;
	int op ;
	menu:
	cout<<"\t\t\tWELCOME TO DPS BANK!!!!!!\t\t\t\t\t\t" ;
	cout<<endl<<endl ;
	cout<<"HOW CAN WE HELP YOU??" ;
	cout<<endl ;
	cout<<"\n1.JOIN US!! OPEN AN ACCOUNT" ;
	cout<<"\n2.DEPOSIT AMOUNT" ;
	cout<<"\n3.WITHDRAW AMOUNT" ;
	cout<<"\n4.DISPLAY ACCOUNT DETAILS" ;
	cout<<"\n5.SEE YOU SOON!!" ;
	cout<<"\n________________________________________________________________"<<endl ;
	cout<<"Choice: " ;
	cin>>op ;
	switch(op)
	{
		case 1: 
			a.init();
			break ;

		case 2: 
			a.deposit(amt) ;
			break ;

		case 3: 
			a.withdraw(amt) ;
			break ;

		case 4: 
			a.show() ;
			break ;

		case 5: exit(0) ;
			break ;


	}
	getch() ;
	goto menu ;

return 0 ;

}