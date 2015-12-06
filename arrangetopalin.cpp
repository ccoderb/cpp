#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
	int l,o=0,i=0,ar[100],p=0;
	for(int j=65;j<95;j++)
	ar[j]=0;
	char str[100];
cout<<"Enter the String";
cin>>str;
l=strlen(str);
while(str[i]!='\0')
{
	if(isupper(str[i]))
	str[i]=tolower(str[i]);
	ar[str[i]]++;
i++;	
}

for(int k=65;k<=92&&(ar[k]==0||ar[k]%2==0||ar[k]==1);k++)
{
	if(ar[k]==1&&o==0)
	{
		o=1;
		continue;
		
	}
	else if(ar[k]==1&&o==1)
	{
		p=0;
		cout<<"can't be arranged to form palindrome \n";
return 0;
	}
	else
{
p=1;
	
	
}
}
if(p==1)
cout<<"can get palindrome\n";
}
