#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin >> n ;
    int p5=5;
    while(p5<=n){
        sum+=n/p5;
        p5*=5;
    }
    cout<< sum <<endl;
}
