#include <iostream>
using namespace std;

void solve(int ii)
{
int n,p,u,r,s;
cin >> n;
cin >> p;
cin >> u;
cin >> r;
cin >> s;
while(n--)
{
if(p+r<=u)
	p+= r;
else if(p-s>=0)
   p-=s;
else break;
}
printf("Case #%d: %d\n",ii,p);
}
int main()
{
int t;
cin >> t;
for(int ii=1;ii<=t;ii++)
       solve(ii);
return 0;
}
