#include<cstdio>
#include<iostream>

using namespace std;

//int a[100001];

int main()
{
    int t,n,m,i,j,maxi,a[100001];
    long long int s,sum;
    scanf("%d",&t);
    while(t--)
    {
        j=s=maxi=0;
        sum=1000000;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            //if(s<=m && j){
            for(;j<n;j++)
            {
                s+=a[j];
                //printf("",j);
                if(s>m)
                    break;
            }
            if((j-i)>=maxi)
            {
            	//printf("",j);
                maxi=j-i;
                if((j-i)==maxi)
                    sum=min(sum,s-a[j]);
                else
                    sum=s-a[j];
            }
            if(j<n){
                s-=a[j];
                //printf("%dth ele sub\n",j);
            }
            s-=a[i];
            //printf("%dth ele sub\n",i);
        }
        printf("%lld %d\n",sum,maxi);
    }
    return 0;
}
