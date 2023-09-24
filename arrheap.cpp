#include <iostream>
using namespace std;

struct Array {
    int* A;
    int size;
    int length;
};
void Display(struct Array arr) {
    int i;
    cout << "\nElements are\n";
    for (i = 0; i < arr.length; i++)
        cout << " " << arr.A[i];
}
int main() {

    struct Array arr;
    int n, i;
    cout << "Enter size of array\n";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "enter numbers\n" << endl;
    cin >> n;
    cout << "enter elements\n" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);

    return 0;
}