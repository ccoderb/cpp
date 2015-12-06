
#include <iostream>

#include<limits.h>
#define isev(n)((n%2)?1:0)



using namespace std;
static int sct=0;
int swap(int ar[],int i,int j)
{sct++;
    int temp;
    temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
 return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int n,ar[10000],e=0,o=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
    
       cin>>ar[i];
        
        if(isev(ar[i]))
            e++;
        else
            o++;
}

    if(e!=o)
        return 0;
    int t=1;
 while(t<=n)
     {
     	if(t%2!=0)
     	{
		 
     if(ar[t]%2==0)
         {
         int ind=0,min=99999;
         for(int i=t+1;i<=n;i+=2)
             {
             if(ar[i]%2!=0&&ar[i]<min)
                 {
                 min=ar[i];
                 ind=i;
             }
             if(ind!=0)
                 swap(ar,t,ind);
         }
         
     }
     	if(t%2==0)
     	{
		 
     if(ar[t]%2!=0)
         {
         int ind=0,min=INT_MAX;
         for(int i=t+1;i<=n;i+=2)
             {
             if(ar[i]%2==0&&ar[i]<min)
                 {
                 min=ar[i];
                 ind=i;
             }
             if(ind!=0)
                 swap(ar,t,ind);
         }
         
     }
 }
                t+=1;
 }
    cout<<sct;
    return 0;
}
}
