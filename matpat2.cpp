#include<iostream>
using namespace std;

int main()
{int ar[10][10],n=7,f=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			if(f>=n)
			f=0;
			ar[i][j]=++f;
			
		}
		f=f-1;
	}
	    for(int i=0;i<n;i++)
	    {
		
		for(int q=0;q<n;q++)
	    cout<<ar[i][q]<<"\t";
	    cout<<endl;
}

}
