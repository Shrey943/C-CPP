# include <iostream>
# include <string>

using namespace std;

int fun(int(*pf) (int ,int),int,int);

void main()
{
printf("%d",fun(fun,2,2));
}
int foo(int a,int b)
{
return(a==b);
}
int fun((*p)(int ,int) ,int a,int b)
{
return((*p)(a,b));
}