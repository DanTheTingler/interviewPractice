#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s){
    //the -2 is from subtracting -1 from m, and -1 from s to account for indices
    //think of it as converting from problem indicies -> array indicies
    //the +1 at the very end is again to account for indicies
    //think of it as converting back from array indicies -> problem indicies
    return ((m+s-2)%n)+1;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
