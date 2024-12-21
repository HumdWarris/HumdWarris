#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  cout<<"Enter the starting value of range = ";
  cin>>n1;
  cout<<"Enter the ending value of range = ";
  cin>>n2;
  for(int i=n1;i<=n2;i++)
  {
    int n=i,m=i,rem,power=0,sum=0,temp;
    while(n>0)
    {
      n = n / 10;
      power++;
    }
    while(m>0)
    {
      rem = m % 10;
      temp = 1;
      for(int j=1;j<=power;j++)
      {
        temp = rem * temp;
      }
      sum = sum + temp;
    }
    if(sum == i)
    {
      cout<<i<<" is an armstrong number "<<endl;
    }
  }

}
