#include<iostream>
#include<math.h>
using namespace std;

int dtob(int d)
{
	int ar[10],i=-1,k;
	while(d!=0)
	{
		i++;
		k=d%2;
		d=d/2;
		ar[i]=k;
		
	}
	k=0;
	int j=0;	
	while(j<=i)
	{
	cout<<"\nj is"<<j;
	k=pow(10,j)*ar[j++]+k  ;
	
	cout<<"\nk is "<<k;
}
return k;
}
int main()
{
	int d,b;
	cout<<"Enter the decimal number\n";
	cin>>d;
	b=dtob(d);
	cout<<"\nbinary equivalent is\n"<<b;
}
