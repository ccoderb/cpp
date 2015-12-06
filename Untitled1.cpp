#include<iostream>
using namespace std;


void fillmat(int,int i,int j);

int main()
{
	int m,n,ar[][10];
	
	cout<<"Enter number of rows in matrice \n";
cin>>m;
	cout<<"Enter number of columns in matrice \n";
cin>>n;

fillmat(ar[][n]);

cout<<"Current values in matrices are\n";
for(int p=0;p<m;p++)
	for(int q=0;q<n;q++)
	cin>>mat[p][q];



cout<<"";
}

void fillmat(int mat[][],int i,int j)
{
	cout<<"Enter the values in matrice \n";
	for(int l=0;l<i;l++)
	for(int m=0;m<j;m++)
	cin>>mat[l][m];
}
