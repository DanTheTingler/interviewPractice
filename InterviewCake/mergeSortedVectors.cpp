#include <iostream>
#include <vector>
using namespace std;

vector<int> vectorMerger(vector<int> v1, vector<int> v2){
   int finalVSize = v1.size() + v2.size();
   vector<int> finalVector;
   int v1index, v2index = 0;


   while(finalVector.size() < finalVSize){
      //one important thing to check for is that we haven't exhausted either vectors

      //if neither vectors are exhausted
      if(v1index != v1.size() && v2index != v2.size()){
            if(v1[v1index] < v2[v2index]){
               finalVector.push_back(v1[v1index]);
               v1index++;
            }

            else{
               finalVector.push_back(v2[v2index]);
               v2index++;
            }
      }

      //if the second vector is exhausted
      else if(v1index == v1.size() && v2index != v2.size()){
         finalVector.push_back(v2[v2index]);
         v2index++;
      }

      //only remaining possibility is that the first vector isn't exhausted
      else{
         finalVector.push_back(v1[v1index]);
         v1index++;
      }


   }

   return finalVector;

}

int main(){

   vector <int> v1 {3, 4, 6, 10, 11, 15, 21, 23};
   vector <int> v2 {1, 5, 8, 12, 14, 19, 21, 23, 25};
   vector <int> final;

   final = vectorMerger(v1, v2);

   for(int i = 0; i < final.size(); i++){
      cout << final[i] << " ";
   }

   return 0;
}