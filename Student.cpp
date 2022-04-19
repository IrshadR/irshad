#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class student
{
	char name[100];
	int age;
	int roll;
	char department[50];
	public:
		void getinfo();
		void showinfo();
		
};
   void student::getinfo()
   {
   	cout<<"Enter name,age,roll,department of student:"<<endl;
   	cin>>name>>age>>roll>>department;
   }
   void student::showinfo()
   {
   	if(age>=18){
   		cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Roll no:"<<roll<<endl<<"Department:"<<department<<endl;
	   }
   }
    int main()
    {
    	student s[100];
    	int i,n;
    	cout<<"Enter no of student:"<<endl;
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    	   s[i].getinfo();
		}
		cout<<"The details are:"<<endl;
		for(i=0;i<n;i++){
		  s[i].showinfo();
		}
	
    getch();
  	return 0;
  }
