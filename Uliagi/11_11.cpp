#include <iostream>
#include <algorithm>
#include <vector>
#include <Windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int* atr = new int[100];
    int size = 100;
    vector<int> vec(atr, atr + sizeof(atr) / sizeof(atr[0]));
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << endl;

    vec.pop_back();
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << endl;

    int elemposl = 999;
    int elem = 888;
    vec.push_back(elemposl);
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << endl;
    front_insert_iterator<vector<int>>;

    if (find(vec.begin(), vec.end(), elemposl) != vec.end())
    {
        cout << " = 999" << endl;
    }
    else
    {
        cout << "error" << endl;
    }

    cout << "Максимальный элемент = = " << *max_element(vec.begin(), vec.end()) << endl;
    cout << "Минимальный элемент = " << *min_element(vec.begin(), vec.end()) << endl;

    vec.reserve(100);
    cout << "Размер вектора" << vec.size() << endl;
    cout << "Вместимость вектора" << vec.capacity() << endl;
}
