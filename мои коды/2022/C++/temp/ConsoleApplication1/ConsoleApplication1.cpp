#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int c = 7;
    double artemp[c];
    cout << "Введите температуру\n";
    for (int i = 0; i < c; i++)
    {
        cout << "Температура в " << (i + 1) << " день ";
        cin >> artemp[i];
    }
    float avtemp = 0, sumtemp = 0, maxtemp = 0;
    int countdays = 0;
    for (int i = 0; i < c; i++)
    {
        sumtemp += artemp[i];
        if (artemp[i] > maxtemp)
        {
            maxtemp = artemp[i];
            countdays = 1;
        }
        else if (artemp[i] == maxtemp)countdays++;
    }
    avtemp = sumtemp / c;
    cout << "Средняя температура " << avtemp << endl;

    ofstream out;
    out.open("C:\\work\\Htemp.txt");
    if (out.is_open())
    {
        out <<"Средняя температура "<< avtemp<<endl;
    }
    system("pause");
    return 0;
}