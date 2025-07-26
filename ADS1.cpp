/*given an array of 1s and 0s which has all 1s first followed by all 0s?
find the number of 0s.count the number of zeros in the given array*/
#include<iostream>
using namespace std;

class g{
    int n,i,j;
    int arr[10];
   

    public:
    void accept();
    void findzero();

}b;

void g::accept(){
    cout<<"\nenter size of array";
    cin>>n;
    cout<<"\n enter a elements";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
}
void g::findzero(){

    int low=0;
    int mid;
    int high=n-1;
    int fzero=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==0){
            fzero=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(fzero!=-1){
        cout<<"\ntotal zeros are"<<(n-fzero);
    }
    else{
        cout<<"\nnot found";
    }

}
int main(){
    b.accept();
    b.findzero();
    return 0;
}