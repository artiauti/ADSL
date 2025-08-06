#include<iostream>
using namespace std;

int main(){

   int n,a[10],k;
   cout<<"\nEnter a size";
   cin>>n;
   cout<<"\enter a elements";
   for(int i=0;i<n;i++){
    cin>>a[i];

   }
   cout<<"\nenter k value";
   cin>>k; 
   int low=0;
   int high=n-1;
   int indextofind=n-k;
   while(low<=high){
    int p=a[high];
    int i=low;
    for(int j=0;j<high;j++){
        if(a[j]<=p){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
    }
    int temp=a[i];
    a[i]=a[high];
    a[high]=temp;

    if(i==indextofind){
        cout<<"\noutput"<<a[i];
        break;
    }
    else if(i<indextofind){
        low=i+1;
        
    }
    else{
        high=i-1;
        
    }

   }
return 0;


}