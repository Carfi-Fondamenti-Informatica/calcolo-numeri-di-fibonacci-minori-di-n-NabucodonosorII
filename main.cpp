#include <iostream>
using namespace std;
int main() {
    int f1 = 1, f2 = 1, fn = 0, n;
    cin >> n;
    if(n==0){
    }else if(n!=0){
        cout << f1 << endl << f2 << endl;fn = f1 + f2;
        while(fn <= n) {
            cout<<fn<<endl;f1=f2;f2=fn;fn=f1 + f2;
        }
    }
    return 0;
}
