#include <iostream>
using namespace std;
const int n = 40;
template <class T>
T sum(const T a[], int size)
{
    T all_sum = 0;
    for (int i = 0; i < size; i++)
    {
        all_sum += a[i];
    }
    return all_sum;
}
/*template <class summable>
summable sum(const summable data[], int size, summable s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s += data[i];
    }
    return s;
}*/
int main()
{

    int arr[n];
    float arr2[n];
    for (int i = 0; i < n; i++)
        arr[i] = i;
    for (int i = 0; i < n; i++)
        arr2[i] = i;
    int num_sum = sum(arr, n);
    float float_sum = sum(arr2, n);
    cout << "The sum is " << num_sum << endl;
    cout << "The sum2 is " << sum(arr2, n) << endl;
}