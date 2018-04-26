/*

Problem #3: Given a vector of integers, find the highest product you can get from three of the integers 
Solution written by Daniel Ting

*/

#include <iostream>
#include <vector>

using namespace std;

int highestProduct(const vector<int>& nums){
   //There are 5 things we need to update every iteration
   //These are the five variables and their default value
   int highestProductOf3 = nums[0] * nums[1] * nums[2];
   int highestProductOf2 = nums[0] * nums[1];
   int lowestProductOf2 = nums[0] * nums[1];
   int highest = max(nums[0], nums[1]);
   int lowest = min(nums[0], nums[2]);

   for(int i = 2; i < nums.size(); i++){
      
      highestProductOf3 = max(highestProductOf3, max(nums[i]*highestProductOf2, nums[i]*lowestProductOf2));

      highestProductOf2 = max(highestProductOf2, max(nums[i]*highest, nums[i]*lowest));

      lowestProductOf2 = min(lowestProductOf2, min(nums[i]*highest, nums[i]*lowest));

      highest = max(nums[i], highest);

      lowest = min(nums[i], lowest);
   }

   return highestProductOf3;

}

int main(){

   vector<int> numsOne = {-10, 1, 3, 4, -10}; //400
   vector<int> numsTwo = {4, 5, 3, 1, 5, 6}; //150

   cout << "The highest product for the first test case is: " << highestProduct(numsOne) << endl;
   cout << "The highest product for the first test case is: " << highestProduct(numsTwo) << endl;

   return 0;
}