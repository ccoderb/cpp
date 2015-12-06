#include<iostream>
#include<math.h>
using namespace std;
 
 int main()
 {int i=0,j=1,q=0,r=0;
 	int ar[22]={1 , 2 , 3 , 4 , 5 , 3 , 4 , 5 , 6 , 7 , 9 , 10 , 11 , 12 , 8 , 9 , 10 , 21 , 35 , 36 , 37 , 22};
 	
 int size = sizeof(ar)/sizeof(ar[0]);
 cout<<"\nsize is \n"<<size;
 int seq[10][8]={0};
 
while(i<size)
{
	seq[q][r++]=ar[i++];
	while(ar[j]==ar[i]+1)
	{
		cout<<endl<<q<<","<<r<<"sequnce is"<<endl;
		seq[q][r++]=ar[j++];
		i++;
	}
	
	
	
	q++;
	
}
int maxid=0;
int sum[q]={0};
int max=INT_MIN;
	for(int k=0;k<q;k++)
	{
	int r=0;
		while(seq[k][r]!=0)
		{
		
		sum[k]=sum[k]+seq[k][r++];
	}
	if (sum[k]>max)
	{
		max=sum[k];
		maxid=k;
	}
	}
	cout<<"\nmax sum is"<<max;
	
	cout<<"max sum elements are\n";
	int o=0;
	while(seq[maxid][o]!=0)
	cout<<seq[maxid][o++]<<endl;
 }
