#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <ios>
#include <limits>
#include <array>
using namespace std;

int main() {
    int x = 0;
    int tgt, n;
    cout << "Input your target: " << endl;
    cin >> tgt;
    cout << "Input the size of the array: " << endl;
    cin >> n;
    cout << "Input your numbers: " << endl;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(i == j) {
                continue;
            }
            if(arr[i]+arr[j]==tgt) {
                cout << "(" << i << ", " << j << ")" << endl;
                x = 1;
                break;
            }
        }
        if(x==1) {
            break;
        }
    }



    return 0;
}









