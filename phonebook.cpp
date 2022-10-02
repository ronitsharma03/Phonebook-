#include<iostream>
#include<windows.h>
using namespace std;
int menu();
int k=0;

int main()
{
	string name[100];
	string no[100];
	int check=0;
	int Total_contacts=0;
    check=menu();
    do
    {
    	//function to add contacts 
    	if(check==1)
    	{
    		cout<<"Name :";
    		cin>>name[k];
    		cout<<"Phone no :";
    		cin>>no[k];
    		k++;
    		Total_contacts++;
		}
		
		//function to display contacts
		else if (check==2)
		{
			int check2=0;
			for(int i=0; i<100;i++)
			{
				if(name[i]!="\0")
				cout<<"Name :"<<name[i]<< "      Phone :"<<no[i]<<endl;
				check2++;
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t";
			}

		}
		//function to Search by Number
		else if(check==3)
		{
			string temp;
			cout<<"Number : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"Number is Found\n";
					cout<<"Name : "<<name[i]<<"       Phone : "<<no[i]<<endl;
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<" This Number is Not found in your contact list\n";
			}
		}
		//function to Search By Name
		else if(check==4)
		{
				string temp;
			cout<<"Name : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"Name is Found\n";
					cout<<"Name : "<<name[i]<<"       Phone : "<<no[i]<<endl;
					check2++;
				}
				
			}
			if(check2==0)
			{
				cout<<"This name is Not found in your contact list\n";
			}
		}
		//function to Update
		else if(check==5)
		{
			string temp,temp2,temp3;
			cout<<"Name : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"New Name : ";
					cin>>temp2;
					cout<<"New Number : ";
					cin>>temp3;
					name[i]=temp2;
					no[i]=temp3;
					check2++;
					cout<<"Updated Successfully ";
				}
			
			}
				if(check2==0)
			{
				cout<<"This name is Not found in your contact list\n";
			}
		}
		//function to delete
		else if(check==6)
		{
				string temp;
			cout<<"For Delete Enter Name : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"Deleted Successfully\n";
					cout<<"Name : "<<name[i]<<"       Phone : "<<no[i]<<endl;
					name[i]="\0";
					no[i]="\0";
					check2++;
					Total_contacts--;
				}
			}
			if(check2==0)
			{
				cout<<"This name is Not found in your contact list\n";
			}
		}
        else if(check==7)
        {
            cout<<"Total number of contacts are: "<<Total_contacts<<endl;
        }
		check=menu();
	}while(check!=8);
	
}
int menu()
{
	cout<<"     PHONE BOOK APPLICATION   \n";
	cout<<" [1]  Add Contacts        \n";
	cout<<" [2]  Display All Contacts\n";
	cout<<" [3]  Search by Number    \n";
	cout<<" [4]  Search by Name      \n";
	cout<<" [5]  Update a contact    \n";
	cout<<" [6]  Delete a contact    \n";
	cout<<" [7]  Number of contacts   \n";
	cout<<" [8]  Exit \n";
	
	int a;
	cin>>a;
	return a;
}