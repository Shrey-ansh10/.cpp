//You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// using for each loop
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int bestBuy = INT_MAX;
    for(int i : prices){
        if(i>bestBuy){
            profit = max(profit, i - bestBuy);
        }
    bestBuy = min(bestBuy, i);
    }
return profit;
}


// using regular for loop
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int bestBuy = INT_MAX;
    for(int i=0; i<prices.size(); i++){
        if(prices[i]>bestBuy){
            profit = max(profit, prices[i]- bestBuy);
        }
    bestBuy = min(bestBuy, prices[i]);
    }
return profit;
}