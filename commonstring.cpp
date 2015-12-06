//common words ffrom 2 strings
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
/*void match(char *str2,char cword[100])
{
	for(int i=0;i<strlen(str2);i++)
	{
		int j=0;
		char cword2[100];
		while(str2[i]!=' '||i<strlen(str2))
		{
			cword2[j++]=str2[i];
		}
		cword[j]='\0';
		int flag=1;
		int lc1=strlen(cword);
		int lc2=strlen(cword2);
		if(lc1==lc2)
		{
			int y=lc1;
			while(lc1!=0)
			{
				for(int i=0;i<lc1;i++)
				{
					if(cword[i]!=cword2[i])
					flag=0;
				}
				if(flag==1)
				cout<<cword;
			}
		}
	}
}
*/
int main()
{
	char *str1,*str2;
char word[10][100];
char *str="Hello world";
int j=0;
for(int i=0;str[i]!='\0';i++,str++,j++)
{
	int k=0;
	while(str[i]!=' '||str[i]!='\0')
	{
		getche();
	
	word[j][k++]=str[i];
	i++;
	cout<<endl<<*(word[j]);
    }
    getche();
	cout<<*(word[j])<<endl;
	    j++;
}



return 0;

}

