/* 

Example:
vector<int> stockPricesYesterday{10, 7, 5, 8, 11, 9};

getMaxProfit(stockPricesYesterday);
// returns 6 (buying for $5 and selling for $11)

Reminder - to compile in C++ 11, use the following command:
g++ -std=c++11 your_file.cpp -o your_program

*/

#include <iostream>
#include <vector>

using namespace std;

int getMaxProfit(const vector<int>& stockPricesYesterday){

   if(stockPricesYesterday.size() < 2){
      throw invalid_argument("Getting a profit requires at least 2 prices");
   }

   int maxProfit = stockPricesYesterday[1] - stockPricesYesterday[0];
   int minPrice = stockPricesYesterday[0];
   int maxPrice = stockPricesYesterday[0];

   for(int i = 0; i < stockPricesYesterday.size(); i++){
      if(stockPricesYesterday[i] > maxPrice) maxPrice = stockPricesYesterday[i];
      if(stockPricesYesterday[i] < minPrice) minPrice = stockPricesYesterday[i];

      if((maxPrice - minPrice) > maxProfit) maxProfit = maxPrice - minPrice;
   }

   return maxProfit; 
}


int main(){

   vector<int> stockPricesYesterday{10, 7, 5, 8, 11, 9};

   int maxProfit = getMaxProfit(stockPricesYesterday);


   cout << "The maximum profit is: " << maxProfit << endl;

   return 0;
}