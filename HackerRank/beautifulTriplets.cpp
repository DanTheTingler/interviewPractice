#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int beautifulTriplets(int d, vector <int> arr) {
    
    int count = 0;
    unordered_map <int, int> nums;
    for(int i = 0; i < arr.size(); i++){
        if(nums[arr[i]-2*d] > 0 && nums[arr[i]-d] > 0) count++;
        nums[arr[i]]++;
    }
    
    return count;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
