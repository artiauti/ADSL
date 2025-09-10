/*Implement a problem of minimum work to be done per day to CO2 finish given tasks within  D days problem 
Statement:given array task[] of size N denoting  amount of work to be done for each task the problem its fine the minimum amount of the work to be done on 
each day so that all the task can be  completed in at most D days note: on one day work can be done for only one task.*/
#include <iostream>
using namespace std;
class b{
    int i,j,n;
    int a[10];
    int task,day,d;
    public:
    void mindays();
    void merge();
    void display();

}b;

void b::mindays(){

    cout<<"\nEnter a size of  task";
    cin>>n;
    cout<<"\nenter work done per day";
for(int i=0;i<n;i++){
    cin>>a[i];

}
cout<<"\nenter days";
cin>>day;



int low=0;
int high=n-1;
int result=high;
while(low<high){
    int mid=(low+high)/2;
    if(mid<=day){
         result=mid;
        high=mid-1; 
    }
    else{
        low=mid+1;
    }

}
    

int d=0;
int x;
for(int x=0;x<n;x++){
for(int t=0;t<n;t++){

    d+=(a[t]+x-1)/x;

    if(d>day){
      cout<<"\nincorrect";
    }
    else{
        cout<<d;
    }
}
}
    
}
int main(){
    b.mindays();
    return 0;
}



