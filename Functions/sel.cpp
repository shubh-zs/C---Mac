#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int x[a];
    int k = 3;
    for (int i = 0; i < a; i++){
        cin >> x[i];
    }
    for (int i = 0; i < k-1 - 1; i++){
        int min = i;       //index
        for (int j = i + 1; j < a; j++){
            if (x[min] > x[j]){
                min = j;
            }
        }
        int temp = x[i];
        x[i] = x[min];
        x[min] = temp;
    }
    // for (int i = 0; i < a; i++){
    //     cout << x[i];
    // }
    cout<<"The kth smallest number is : ";
    cout<<x[k-1-1];
}