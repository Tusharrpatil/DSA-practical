//============================================================================
// Name        : string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class operation
{  int i,j,l1=0,x=0,l2=0;
	string s1,s2,s3;
public:
	void get ()
	{cout<<"Enter string 1";
	 cin>>s1;
	 cout<<"Enter string 2";
	 cin>>s2;
	}
	 void length()
	 {
	  for(i=0;s1[i]!='\0';i++)
		  l1++;
	 for(i=0;s2[i]!='\0';i++)
		 l2++;
	 cout<<"length of s1 is "<<l1;
	 cout<<"length of s2 is "<<l2;
	 }
	 void compare()
	 {
		x=0;
		 if(l1==l2)
		{	for(i=0;s1[i]!='\0';i++)
			{	if( s1[i]!=s2[i])
				 { x=1;break;    }

			}
		if(x==1) cout<<"unequal";
		else
		cout<<"Both are equal";
		}
	 }

 };

int main()
{
	operation o1;
	o1.get();
	o1.length();
	o1.compare();


	return 0;
}
