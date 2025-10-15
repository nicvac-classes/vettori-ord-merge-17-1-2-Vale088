#include <iostream>
using namespace std;

int main() {
   #include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {

    int n, m, i, j, k, pos, val;
    int v1[i];

    cout << "inserisci la dimesione del primo vettore" << endl;
    cin >> n;
    cout << "inserisci la dimesione del secondo vettore" << endl;
    cin >> m;
    i = 0;
    while (i < n - 1) {
        v1[i] = rand() % 0;
        i = i + 1;
    }
    i = 0;
    while (i < m) {
        V2[j] = rand() % 0;
        i = i + 1;
    }
    for (i = 0; i <= n - 2 - i; i++) {
        if (v1[j] > v1[j + 1]) {
            t = v1[j];
            v1[j] = v1[j + 1];
            v1[j + 1] = t;
            i = i + 1;
        }
    }
    for (i = 0; i <= m - 2; i++) {
        if (V2[j] > V2[j + 1]) {
            t = V2[j];
            V2[j] = V2[j + 1];
            V2[j + 1] = t;
            i = i + 1;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        cout << v1[i] << endl;
    }
    for (i = 0; i <= m - 1; i++) {
        cout << V2[i] << endl;
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < n && j < m) {
        if (v1[i] < V2[j]) {
            V3[k] = v1[i];
            i = i + 1;
        } else {
            V3[k] = V2[j];
            j = j + 1;
        }
    }
    return 0;
}
