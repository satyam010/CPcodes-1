
#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<limits.h>
#include<functional>
#include<algorithm>


using namespace std;

int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
const double pi = 3.14159265358;


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
string s,a,b;
cin>>s>>a>>b;

string check[4]={"fantasy","forward","backward","both"};
li i;
int f=0;
i=string::npos;

int x=s.find(a);
if(i!=x && (s.find(b,a.size()+x)!=i) ) f++;
 
 reverse(s.begin(),s.end());
 x=s.find(a);

if(i!=x && (s.find(b,a.size()+x)!=i) )f+=2;
    cout<<check[f];
    return 0;
    }

