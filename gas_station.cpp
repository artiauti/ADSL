/*
gas station circuit
statemen:gas and cost arrays find starting point to complete circuit
i/p:gas[]={1,2,3,4,5} cost[]:{3,4,5,1,2}
o/p: start index:3
*/

#include<iostream>
using namespace std;

class gr{
    public:
    int gas[10];
    int cost[10];
    int ar[5];
    int n,g,c;
 public:
 void accept();
 void greedy();
 void display();


}b;

void gr::accept(){
    cout<<"\nenter size of gas and coat";
    cin>>n;
    cout<<"enter gas element ";
    for(int i=0;i<n;i++){
        cin>>gas[i];
    }
   
    cout<<"\nEnter cost element ";
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
}

void gr::greedy(){
    int max=100;
   for(int i=0;i<n;i++){
    if(gas[i]>0 && cost[i]>0){
         ar[i]=gas[i]-cost[i];
        if(ar[i]<0){
        cout<<"";

        }
        else{
            if(ar[i]<max){
           max=ar[i];
            }
        }
    }
    
   }
  cout<<"Start index: "<<max; 


}
int main(){
    b.accept();
    b.greedy();
    return 0;
}