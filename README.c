#include<stdio.h>

int main(){
int n,i,j,t=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{t=0;
for(j=0;j<n;j++)
{

if(a[i]==a[j]&&i!=j){
    t++;
}
  }
  if(t==0)
    printf("%d\n",a[i]);
}
    return 0;
}
