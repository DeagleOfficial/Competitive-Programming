#include <bits/stdc++.h>
using namespace std;

string toBinaryStr(long n) {
    string ans = "";
    while (n>0) {
        int rem = n%2;
        ans += to_string(rem);
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    long n;
    cout <<"Enter number: ";
    cin >> n;
    cout << "Binary:" << (toBinaryStr(n));
    return 0;
}
