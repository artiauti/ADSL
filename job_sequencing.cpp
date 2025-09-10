/*job sequencing with deadline
statement:jobs with deadlines /profit,maximize profit
i/p:jobs(id,deadlines,profit):[(1,2,100),(2,1,19),(3,2,27),(5,1,15)]
output:max profit:127*/

#include <iostream>
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

int main() {
   
    Job jobs[4] = { {1,2,100}, {2,1,19}, {3,2,27}, {5,1,15} };
    int n = 4;

    // sort profit (bubble sort)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(jobs[j].profit < jobs[j+1].profit){
                Job temp = jobs[j];
                jobs[j] = jobs[j+1];
                jobs[j+1] = temp;
            }
        }
    }

    // find max deadline
    int maxd = 0;
    for(int i=0;i<n;i++){
        if(jobs[i].deadline > maxd){
            maxd = jobs[i].deadline;
           
        }
    }

    // create slot array (for scheduling jobs)
    int slot[10];
    for(int i=0;i<=maxd;i++){
        slot[i] = -1;
    }
        

    int profit = 0;

    // schedule jobs
    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline;j>0;j--){
            if(slot[j] == -1){
                slot[j] = jobs[i].id;
                profit += jobs[i].profit;
                break;
            }
        }
    }

    cout<<"Max Profit = "<<profit<<endl;

    return 0;
}
