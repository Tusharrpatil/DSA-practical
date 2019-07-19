//============================================================================
// Name        : t1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream> 		//including header file
using namespace std;
	class student			//declaring class
	{int sum,mark,x,rn,a=0,p=0;				//declaring members
	string name;

	public:
		void get()
		{
			cout<<"Enter the name of student";
			cin>>name;
			cout<<"Enter the roll no ";
			cin>>rn;
			cout<<"Press 1 if you are present 2 for abscent";
			cin>>x;
			if(x==1)
				 		 {p++; 	 }
				 		 else
				 		 { a++;	 }
			cout<<"Enter the marks if present else press 0";
			cin>>mark;
		}
	 	 void display()
	 	 {
	 		 cout<<"Name is "<<name<<endl;
	 		 cout<<"Roll no is"<<rn<<endl;
	 		 if(x==1)
	 		 { cout<<"present"<<endl;
	 		 	 	 	 	 }
	 		 else
	 		 { cout<<"abscent"<<endl;
	 		 	 	 	 	 }
	 		 cout<<"marks obtained are"<<mark;
	 	 }

	 	 void cal()
	 	 {cout<<"no of student present are"<<p<<endl;
	 	 cout<<"no of student abscent are"<<a<<endl;
	 		sum=0;
	 		sum=sum+mark;

	 	 }
};

int main()
{
	student s[61];
	int t,l,sum;
	cout<<"Enter how many students are in class";
		cin>>t;
		for(int i=0;i<t;i++)
		    { s[i].get();
		     s[i].display();
		    s[i].cal();}

return 0;
}
