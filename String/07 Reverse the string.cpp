#include<iostream>
using namespace std;
int main ()
{
	char A[]="python";
	char B[7];
	int i;
	for (i=0;A[i]!='\0';i++)
	{
	
	}
	i=i-1;
	for (int j=0;i>=0;i--,j++)
	{
		B[j]=A[i]; //the i string is traversed frpm end -> start, and j is traversed from start -> end!
	}
	B[i]='\0';
	cout<<"Reverse of the string is "<<endl<<B;
}
