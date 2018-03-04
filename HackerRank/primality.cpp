#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool primeChecker(int num){
    if(num == 1) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    else if(num % 3 == 0) return false;
    
    for(int i = 4; i < sqrt(num); i++){
        if(num%i == 0) return false;
    }
    
    return true;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numsLength;
    int n;
    cin >> numsLength;
    
    for(int i = 0; i < numsLength; i++){
        cin >> n;
        if(primeChecker(n)) cout << "Prime" << endl;
        else{
            cout << "Not prime" << endl;
        }
    }
    
    return 0;
}
