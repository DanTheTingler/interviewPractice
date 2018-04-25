/* Problem #2: Given a vector of integers, find the product of every integer except the integer at that index

For example:

Given:
[1, 7, 3, 4]

Function should return:
[84, 12, 28, 21]

By calculating:
[7*3*4, 1*3*4, 1*7*4, 1*7*3]

*/


#include <iostream>
#include <vector>

using namespace std;

vector<int> getProductsofAllIntsExceptAtIndex(const vector<int>& nums){
   //Idea: First, calculate all products from the back, then finalize by going from the front
   vector<int> backProducts;

   //Iterating from the back
   //1: 1 
   //2: 4
   //3: 3, 4
   //4: 4, 3, 7

   int mult = 1;
   for(int i = nums.size()-1; i >= 0; i--){
      backProducts.insert(backProducts.begin(), mult);
      mult *= nums[i];
   }

   /*now:
   back[0] = 7*3*4
   back[1] = 3*4
   back[2] = 4
   back[3] = 1
   */

   //Iterating from the front
   //1: (1) * back[0]
   //2: nums[0] * back[1]
   //3: nums[0] * nums[1] * back[2]
   //4: nums[0] * nums[1] * nums[2] * 1

   mult = 1;
   for(int i = 0; i < nums.size(); i++){
      backProducts[i]*= mult;
      mult *= nums[i];
   }

   return backProducts;

}

int main(){

   vector<int> nums{1, 7, 3, 4};
   //Different test cases:
   //vector<int> nums{1, 7, 0, 4};

   vector<int> finalProducts = getProductsofAllIntsExceptAtIndex(nums);

   for(int i = 0; i < finalProducts.size(); i++){
      cout << finalProducts[i] << endl;
   }

   return 0;
}