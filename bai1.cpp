#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;

    cout << "Nhap gia tri cua so thu nhat: ";
    cin >> x;

    cout << "Nhap gia tri cua so thu hai: ";
    cin >> y;

    cout << "Gia tri truoc khi hoan doi la:" << endl;
    cout << "so thu nhat = " << x << endl;
    cout << "so thu hai = " << y << endl;

    swap(&x, &y);

    cout << "Gia tri sau khi hoan doi la:" << endl;
    cout << "so thu nhat = " << x << endl;
    cout << "so thu hai = " << y << endl;

    return 0;
}
