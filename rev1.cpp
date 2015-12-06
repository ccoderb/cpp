#include <iostream>
#include<conio.h>>
using namespace std;

int rev(char *str,int i,int j)
{
   int m=j/2;
    while(i<=m)
    {
    char temp=str[j];
    str[j]=str[i];
    str[i]=temp;
    i++;
    
    }

    return 0;
}

int nrev(char *str)
{
    int i=0,j=0;
    //int l=strlen(str);
    while(str[j]!='\0')
    {
    if(str[j+1]!=' '||str[j+1]!='\0')
    {
        rev(str,i,j);
        i=j+2;
        j++;
    }
    j++;
    }
    return 0;
}

int main() {
int i=0;
char str[100],c;
cout<<"Enter the string";
while(c=getchar()!='.')
{
    str[i++]=c;
  
    
}
getche();
str[i]='\0';
nrev(str);
cout<<"new string is"<<str;
    // your code goes here
	return 0;
}

