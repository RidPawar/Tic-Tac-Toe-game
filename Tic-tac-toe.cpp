#include<iostream>
#include<stdlib.h>
using namespace std;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void screen();
void game();
int main()
{
	cout<<"Tic Tac Toe\n";
	cout<<"Player 1 (x) - Player 2 (0)\n";
	int n;
	screen();
	game();
	
}
void screen()
{
	system("CLS");
	cout<<"Tic Tac Toe\n";
	cout<<"Player 1 (x) - Player 2 (0)\n";
	int t=1;
	for(int i=1;i<=9;i++)
	{
		cout<<a[i]<<" | ";
		if(t%3==0)
		{
		cout<<"\n";
		cout<<"--|---|---|\n";
		}
		t++;
	}
}
void game()
{
	int n;
	int f1=0;
	int f2=0;
	int i=0;
	char c;
	while(1)
	{
		f2=0;
		i++;
		if(i%2!=0)
		c='x';
		else
		c='o';
		if(i%2!=0)
		cout<<"\nPlayer 1 "<<" :Enter number:";
		else
		cout<<"\nPlayer 2 "<<" :Enter number:";
		cin>>n;
		if(a[n]=='x'||a[n]=='o')
		{
			cout<<"\nMove not allowed\n";
			i=i-1;
			continue;
		}
		if(n<1||n>9)
		{
			cout<<n;
			cout<<"\nWrong choice\n";
			i=i-1;
			continue;
		}
		a[n]=c;
		
		if(a[1]==a[2]&&a[2]==a[3])
		{
		f1=1;
		break;
		}
		else if(a[4]==a[5]&&a[5]==a[6])
		{
		f1=1;
		break;
		}
		else if(a[7]==a[8]&&a[8]==a[9])
		{
		f1=1;
		break;
		}
		else if(a[1]==a[4]&&a[4]==a[7])
		{
		f1=1;
		break;
		}
		else if(a[2]==a[5]&&a[5]==a[8])
		{
		f1=1;
		break;
		}
		else if(a[3]==a[6]&&a[6]==a[9])
		{
		f1=1;
		break;
		}
		else if(a[1]==a[5]&&a[5]==a[9])
		{
		f1=1;
		break;
		}
		else if(a[3]==a[5]&&a[5]==a[7])
		{
		f1=1;
		break;
		}
		
		/////////////////////////////
		int cnt=0;
		for(int i=1;i<=9;i++)
		{
			if(a[i]=='x'||a[i]=='o')
			cnt++;
		}
		if(cnt==9)
		{
		cout<<"\nThis is a tie";
		break;
		}
		screen();
		/////////////////////////////////
	}
	if(f1==1)
	{
		if(c=='x')
		cout<<"\nPlayer 1 wins!!";
		else
		cout<<"\nPlayer 2 wins!!";
	}
	
}


