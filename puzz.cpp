#include<iostream>
using namespace std;

int main()
{
	int ar[5][5];
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
		if(i==0||j==0)
		ar[i][j]=5;
		else if(i==1||j==1)
		ar[i][j]=4;
		else if(i==2||j==2)
		ar[i][j]=3;
		
	}
		for(int i=0;i<5;i++)
		{
		
		cout<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<ar[i][j];
	}
	}
}
