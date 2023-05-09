#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int sum=a+=b;
cout<<"sum is "<<sum;
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int sub=a-=b;
cout<<"substraction is "<<sub;
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int mult=a*=b;
cout<<"multiplication is "<<mult;}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int div=a/=b;
cout<<"division is "<<div;
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int mod=a%=b;
cout<<"mod is "<<mod;
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int store=a<b&&a>b;
cout<<"answer is "<<store;
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
int store=a<b||a>b;
cout<<"answer is "<<store;
}

#include<iostream>
using namespace std;
int main()
{int a=5,
b=10;
int store=a<b&&a>b;
cout<<"answer is "<<store;}

#include<iostream>
using namespace std;
int main()
{int a=23,
b=9;
cout<<"jhjgh"<<(a<b);
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"answer is "<<!(a<b);
}

QUESTIONS 

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter four numbers";
cin>>a>>b;
if(a==b)
cout<<"equal";
else
cout<<"not equal";
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"answer is "<<(a<50&&a<b);
}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"answer is "<<(a<50||a<b);
}

#include<iostream>
using namespace std;
int main()
{int a;
cout<<"enter four digit number";
cin>>a;
int sum=a+8;
int div=sum/3;
int mod=div%5;
int mult=mod*5;
cout<<"answer is "<<mult;}

#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"answer is "<<(a==b);
}

//postive neagtive if...else if
#include<iostream>
using namespace std;
int main()
{int a;
cout<<"enter a number";
cin>>a;
if(a>0)
{cout<<"number is positve";
}
else if(a==0)
{cout<<"number is 0";
}
else
{cout<<"number is negative";
}
}

//odd even if...else if
#include<iostream>
using namespace std;
int main()
{int a;
cout<<"enter a number";
cin>>a;
if(a%2==1)
{
cout<<"number is odd";}
else if(a==0)
{cout<<"number is 0";}
else
{cout<<"number is even";
}
}

//percentage if....else if
#include<iostream>
using namespace std;
int main()
{int a,b,c;
cout<<"enter three subjects marks";
cin>>a>>b>>c;
int d=(a+b+c);
int e=d*100;
int f=e/300;
cout<<f;
if(f>75)
{
cout<<"distinction";}
else if(f<75 && f>60)
{
cout<<"first class";
}
else if(f<60 && f>40)
{cout<<"second class";
}
else
{cout<<"fail";
}
}























































































