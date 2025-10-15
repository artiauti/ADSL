/* implement subset sum problem    statement:given a set of non-negative integers and a value sum the task is to
check if there is a subset of the given set whos sum is equal to the given sum */

#include <iostream>
using namespace std;
int main(){
  // int set[10]={2,5,8,10,23,3};
  int set[10];
   //int sum=18;
   int sum;
    int n,num;
   string res="false";
   cout<<"\nenter size";
   cin>>n;
   cout<<"\nenter a elements";
   for(int i=0;i<n;i++){
    cin>>set[i];
   }
   cout<<"\nenter sum";
   cin>>sum;
   
   for( int i=0;i<n;i++){
     num=set[i];
    for(int j=i+1;j<n;j++ ){
        if(num<sum){
            num=num+set[j];
        
        if(num>sum){
            num=num-set[j];
        }
        else if(sum==num){
          
            res="True";
            break;
        }
        
    }
     
   }
 

}
 cout<<res;
return 0;
}