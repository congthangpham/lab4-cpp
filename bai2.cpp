#include <iostream>

using namespace std;

int sum(int arr[], int n)
{
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    return sum;
}
int main()
{
    int n;
    int arr[10];

    cout << "Nhap so luong phan tu cua mang (toi da 10): ";
    cin >> n;

    cout << "Nhap " << n << " phan tu vao mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Tong cac phan tu trong mang la: " << sum(arr, n) << endl;

    return 0;
}
