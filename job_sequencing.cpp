#include<iostream>
using namespace  std;
class gr{
   public:
   int  n;
   int i,j;
   int j1[5],p[10],d[10];

   public:
   void accept();
   void greedy();


}b;

void gr:: accept(){
    cout<<"\nenter size ";
    cin>>n;
    cout<<"\nEnter a elements";
    
    for(i=0;i<n;i++){
        cin>>j1[i];
        for(j=0;j<j1[i];j++){
            cout<<"\nEnter deadline";
            cin>>d[j];
            cout<<"\nEnter profit";
            cin>>p[j];
        }
    }

}
int main(){
    b.accept();
    return 0;

}