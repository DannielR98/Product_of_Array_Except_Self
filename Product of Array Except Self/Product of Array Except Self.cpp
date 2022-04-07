

#include <iostream>
#include <vector>
using namespace std;



void prodArray(vector<int> a, int n) {

    vector<int> left_vector(n,1);
    vector<int> right_vector(n,1);
    vector<int> test(n, 1);


    for (int i = 1; i < n; i++)
    {
        left_vector[i] = left_vector[i - 1]*a[i - 1];
    }

    for (int i = n-2; i >= 0; i--)
    {
        right_vector[i] = right_vector[i + 1] * a[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = right_vector[i] * left_vector[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }




}
int main() {
    vector<int> a{4, 6, 1 ,2};
    int n = a.size();
    prodArray(a, n);
    return 0;
}