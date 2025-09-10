/*implement problem to maximize profit by trading stocks based on given rate per day
given an array arr[] of N positive integer which denotes the cost of selling and buying a stock
on each of the N days.the task is to find the maximum profit that can earned by buying a stock on
or selling all previously bought stock on a perticular day.input:arr[]={2,3,5} output:5*/
#include<iostream>
using namespace std;

int maxprofit(int prices[],int n)
{
    int max_profit=0;
    int profit=0;
    for (int i = n-1; i >=0 ; i--)
    {
        if(prices[i] > max_profit)
        {
            max_profit = prices[i];
        }
        else
        {
            profit += max_profit - prices[i];
        }     
    }
    return profit;
    
}
int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    int prices[n];
    cout << "Enter the stock prices for each day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    
    int result = maxprofit(prices, n);
    cout << "Maximum profit that can be made is: " << result << endl;
    
    return 0;
}