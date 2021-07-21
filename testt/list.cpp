#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> a;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number:";
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "The numbers are: " << a[i] << endl;
    }
    return 0;
}