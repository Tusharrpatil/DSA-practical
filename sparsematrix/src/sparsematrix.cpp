//============================================================================
// Name        : sparsematrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class sparse
{	int a[100][100];
	int r,c,i,k,count=0,t;
	public:
	void get()
	{	cout<<"Enter the no of rows and columns of matrix"<<endl;
		cin>>r>>c;
		cout<<"Enter the elements";
		for(i=0;i<r;i++)
		{for(k=0;k<c;k++)
			cin>>a[i][k];
		}

	}
	void display()
	{cout<<"sparse matrix of given matrix is"<<endl;
		for(i=0;i<r;i++)
				{  for(k=0;k<c;k++)
					{if(a[i][k]!=0)
					count++;
					}
				}
		cout<<r<<"\t"<<c<<'\t'<<count<<endl;
		for(i=0;i<r;i++)
		{  for(k=0;k<c;k++)
		  {
			if(a[i][k]!=0)
			cout<<i<<"\t"<<k<<"\t"<<a[i][k]<<endl;
		  }
		}

	}
	void transpose()
	{
		t=r;
		r=c;
		c=t;
		for(i=0;i<r;i++)
			{ cout<<endl;
				for(k=0;k<c;k++)
				cout<<a[i][k];

	}
	}

};
int main() {
	sparse s1;
	s1.get();
	s1.display();
	s1.transpose();

	return 0;
}
