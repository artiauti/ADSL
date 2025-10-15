#include <iostream>
using namespace std;

int main() {
  
    int sum, n;
    cout << "Enter the target sum: ";
    cin >> sum;

    cout << "Enter number of coin types: ";
    cin >> n;

    int coins[50]; 
    cout << "Enter the coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    
    long long dp[1000]; 
    for (int j = 0; j <= sum; j++) {
        dp[j] = 0;
    }
    dp[0] = 1; 
    
    for (int i = 0; i < n; i++) {
        int coin = coins[i];
        for (int j = coin; j <= sum; j++) {
            dp[j] = dp[j] + dp[j - coin];
        }
    }

    
    cout << sum << " = " << dp[sum] << endl;

    return 0;
}
