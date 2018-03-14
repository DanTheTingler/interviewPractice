#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

using namespace std;

//This program calculates the minimum distance between two identical elements in an array

int minimumDistances(vector <int> a) {
    unordered_map <int, int> nums;
    int min = numeric_limits<int>::max();
    for(int i = 0; i < a.size(); i++){
        if(nums.find(a[i]) != nums.end()){
            int temp = i - nums[a[i]];
            if(temp < min) min = temp;
            
        }
        
        nums[a[i]] = i;
    }
    
    if(min == numeric_limits<int>::max()) return -1;
    
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}
