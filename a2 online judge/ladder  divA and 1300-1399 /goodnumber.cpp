
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
lli n,k,cnt,x,rem,i;

    cin>>n>>k;
    cnt=0;

while(n--){
    cin>>x;

    bool check[k+1];
    memset(check,false,sizeof(check));

    while(x){
        rem=x%10;
        check[rem]=true;
        x/=10;
    }
    for(i=0;i<k+1;)
        if(check[i]) i++;
        else break;

    if(i==(k+1) ) cnt++;
}
cout<<cnt<<endl;




 return 0;
}
