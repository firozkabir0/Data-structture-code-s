#include<iostream>
using namespace std;
int food,drinks;
void food_manu()
{
    int x,n,t,m,y;
    m=0;
    while(1){
        cout<<"Food item: "<<endl;
        cout<<"1-> Pizza  small (300 BDT)"<<endl;
        cout<<"2-> Pizza  big (500 BDT)"<<endl;
        cout<<"3-> chicken fry (90 BDT)"<<endl;
        cout<<"4-> Shawarma  (150 BDT)"<<endl;
        cout<<"5->  Barger chicken  (80 BDT)"<<endl;
        cout<<"6->  Barger chicken  (120 BDT)"<<endl;
        cout<<"Enter how many item you want to select: "<<endl;
        cin>>n;
        cout<<" please select by serial number: "<<endl;
        for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            t=300;
        }
        else if(x==2){
            t=500;
        }
        else if(x==3){
            t=90;
        }
        else if(x==4){
            t=150;
        }
        else if(x==5){
            t=80;
        }
        else if(x==6){
            t=120;
        }

         m=t+m;
        }
        food=m;
        cout<<" your bill is: "<<food<<endl;
        break;

    }
}

void drink_manu()
{
    int x,n,t,m;
    m=0;
    while(1){
        cout<<"Drink item: "<<endl;
        cout<<"1-> White Magic  (6000 BDT)"<<endl;
        cout<<"2-> 100 piper (3000 BDT)"<<endl;
        cout<<"3-> Sprite 400 ml  (30 BDT)"<<endl;
        cout<<"4-> 7 up 500 ml  (30 BDT)"<<endl;
        cout<<"5->  coffee   (50 BDT)"<<endl;
        cout<<"6->  cold coffee  (100 BDT)"<<endl;
        cout<<"Enter how many item you want to select: "<<endl;
        cin>>n;
        cout<<" please select by serial number: "<<endl;
        for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            t=6000;
        }
        else if(x==2){
            t=3000;
        }
        else if(x==3){
            t=30;
        }
        else if(x==4){
            t=30;
        }
        else if(x==5){
            t=50;
        }
        else if(x==6){
            t=100;
        }

         m=t+m;
        }
        drinks=m;
        cout<<" your bill is: "<<drinks<<endl;
        break;

    }
}
int main()
{
    int f,d,a,y,total;
    while(1){
    cout<<" press 1 for see the food item and 2 for drinks : ";
    cin>>f;
    if(f==1){
        food_manu();
        cout<<endl;
        cout<<"may you want some drinks, for drinks item enter 1 or 0 for exit:"<<endl;
        cin>>y;
        if(y==1){
           drink_manu();
           break;
        }
        else{
        break;
        }
    }
    else if(f==2){
        drink_manu();
        cout<<endl;
        cout<<"may you want some Food, for food item enter 1 or 0 for exit:"<<endl;
        cin>>y;
        if(y==1){
           food_manu();
           break;
        }
        else{
        break;
        }
    }

    else{
        cout<<" wrong keyword. please enter correct keyword: ";
    }
    }
    total=food+drinks;
    cout<<" your total bill is : " <<total<<endl;


}
