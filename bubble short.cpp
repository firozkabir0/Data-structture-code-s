#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[20]={23,2,21,45,65,78,65,43,1,23,34};
    int y=11;
    bubble_sort(a,y);
    for(int i=0;i<=11;i++){
        cout<<a[i]<<endl;
    }
}
