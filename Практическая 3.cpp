#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;
int main() {

    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int n, m;
    n = 3;
    m = 5;
    
    vector <vector <double>> a(n, vector <double>(m));
    for (int i = 0; i < n; ++i) {
        cout << "Введите 5 элементов для строки " << i + 1 << ": ";
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

   
    for (int i = 0; i < n; ++i) {
        double sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }
        double average = sum / 5;
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << endl;
    }
    return 0;
}