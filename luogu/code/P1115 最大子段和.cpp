#include <iostream>
using namespace std;
int main(){
    int n,sum=0,maxsum=0,maxval=-1e9;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if (a[i] > maxval){
            maxval = a[i];
        }
        if (sum < 0){
            sum = 0;
        }
    if (sum > maxsum){
        maxsum = sum;
        }
    }
    if (maxval < 0){
        maxsum = maxval;
    }
    cout << maxsum << endl;
}