#include<iostream>
using namespace std;
int baynary_scharch(int a[],int n,int x){
    int left=0;
    int right=n-1;
    int mid;
    while(left<=right){
        mid=(right+left)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
}
int main()
{
    int n[10]={10,20,21,22,23,24,25,26,27,28};
    int a,b;
    int c;
    b=10;
    cin>>a;
    c=baynary_scharch(n,b,a);
    cout<<n[c]<<endl;
}
