#include <iostream>
#include<math.h>
using namespace std;

void combine(int arr[], int lb, int mid, int ub){
    int p = lb, q = mid+1, b[ub - lb + 1], i, k = 0;
    for (i = lb; i <= ub; i++){
        if (p > mid) b[k++] = arr[q++];
        else if (q < mid) b[k++] = arr[p++];
        else if (arr[p++] < arr[q++]) b[k++] = arr[p++];
        else b[k++] = arr[q++];
    }
    int k2=0;
    for (i = lb; i <lb+k; i++) arr[i] = b[k2++];
}
void merge_sort(int arr[], int lb, int ub){
    if (lb < ub){
        int mid = lb+((ub-lb)/2);
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);
        combine(arr, lb, mid, ub);
    }
    return;
}

int main(){
    int a, b, c, d, e, l, f, temp;
    cout << "Input the value for the length of the array : ";
    cin >> l;
    cout << "Input the value for the elements in array : \n";
    if (l > 0){
        int arr[l];
        for (a = 0; a < l; a++) cin >> arr[a];
        cout << "The array before the Merge sort : \n";
        for (c = 0; c < l; c++) cout << arr[c] << ", ";
        cout << "\b\b";
        merge_sort(arr, 0, l-1);
        cout << "\nArray After Merge Sort : \n";
        for (c = 0; c < l; c++) cout << arr[c] << ", ";
        cout << "\b\b";
    }
}



