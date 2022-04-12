#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d = 5, c = 0,q;
        while((q=n/d)) {
            c += q;
            n = q;
        }
        cout << c << "\n";
    }
    return 0;
}