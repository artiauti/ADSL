/*Implement the problem of moving all zeroes to the end of array
statement: Given the array of random numbers move all zeroes to the end of array*/

#include<iostream>
using namespace std;

class MS{

    
    public:
    int n; 
    int key[30];

    void accept();
    void display();
    void Merge(int key[],int low,int mid,int high);
    void sort(int key[], int low, int high);
};

void MS::accept()
{
    cout<<"\nEnter the size of array:";
    cin>>n;

    cout<<"\nEnter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>key[i];
    }

}

void MS::display()
{
 cout<<"\nArray elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<key[i]<<"\t";
    }
}

void MS::Merge(int key[],int low,int mid,int high)
{
    int l1 = mid+1-low;
    int l2 = high -mid;

    
    int l[l1], r[l2];

    
    for(int i=0;i<l1;i++)
    {
        l[i] = key[low+i];
    }
    for(int j=0;j<l2;j++)
    {
        r[j] = key[mid+1+j];
    }
  
    int i=0,j=0,k=low;
    while(i<l1 && j<l2)
    {
        if(l[i]!=0)
        {
            key[k]=l[i];
            i++;
        }
        else
        {
            key[k]=r[j];
            j++;
        }
        k++;
    }

   
    while(i<l1)
    {
        key[k] = l[i];
        i++;
        k++;
    }
    while(j<l2)
    {
        key[k] = r[j];
        j++;
        k++;
    }
}
void MS::sort(int key[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        
        sort(key, low, mid);
      
        sort(key, mid + 1, high);
       
        Merge(key, low, mid, high);
    }   
}

int main()
{
    MS m;
    m.accept();
    m.sort(m.key, 0, m.n - 1);
    m.display();
    return 0;
}