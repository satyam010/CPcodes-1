
#include<iostream>
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


#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl;
#define MOD 		1000000007
#define MAX 		1e9
#define MIN    		-1e9

typedef long long lli;
typedef long li;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int i,flag,n,m,j;
flag=1;

vector <string> v;
string s;
cin>>n>>m;
for(i=0;i<n;i++){
    cin>>s;v.push_back(s);
}



for(i=0;i<v.size()-1;i++)
if(v[i]==v[i+1])
{cout<<"NO";
    flag=0;break;
}

if(flag)
    for(i=0;i<v.size();i++){
    s=v[i];
    for(j=0;j<s.size()-1;j++)
        if(s[j]!=s[j+1]){
            cout<<"NO";
            flag=0;
            break;
        }
    if(flag==0) break;
    }


    if(flag) cout<<"YES";





 return 0;



















}
