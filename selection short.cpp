#include<iostream>
using namespace std;
void selection_short(int a[], int n){
    int index,i,j,temp;
    for(i=0;i<=n-1;i++){
       index=i;
        for(j=i+1;j<=n;j++){
            if(a[j]<a[index]){
                index=j;
            }

        }
        if(index!=i){
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
}
int main()
{
    int z[20];
   int  n=11;
    int y;
    for(int i=0;i<=n;i++){
        cin>>z[i];
    }
    cout<<endl;
    selection_short(z,n);
    for(int i=n;i<=0;i--)
        cout<<z[i]<<endl;

    }

