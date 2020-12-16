#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int i, size;

    cin >> size;

    if (size <= 1000 && size >= 1)
    {
        int arr[size];
        for (i = 0; i < size; i++) cin >> arr[i];
        for (i = size -1; i >= 0; i--) cout << arr[i] << ' ';
        cout << endl;
    }
    else exit(1);
    return 0;
}
