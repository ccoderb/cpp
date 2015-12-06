 #include<iostream>
 #include<conio.h>

 using namespace std;
 
 void swap(int ar[],int j,int k)
 {
 int temp;
 temp=ar[j];
 ar[j]=ar[k];
ar[k]=temp; 
 
  }
 void quicks(int ar[],int l,int r)
 {
 	if(l>=r)
 	return;
 	swap(ar,l,(l+r)/2);
 	
 	int last=l;
 	for(int i=l+1;i<=r;i++)
 	{
 		if(ar[i]<ar[l])
 		swap(ar,++last,i);
	 }
	 swap(ar,l,last);
	 quicks(ar,l,last-1);
	 quicks(ar,last+1,r);
	 
 }
  int main()
  {
  	
  	int ar[10]={10,4,3,9,8,1,3,2,7,6};
  	quicks(ar,0,9);
  	cout<<"sorted array is\n";
  	for(int i=0;i<10;i++)
  	cout<<ar[i]<<endl;
  }
