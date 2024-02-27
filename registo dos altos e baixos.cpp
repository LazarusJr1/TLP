#include <iostream>

void main() {
    using namespace std;
    int d[10], contar = 0, i;
    int pd = 0; 

    for (i = 0; i < 10; i++) {
        cout << "Distance of hike " << i + 1 << " (meters): \n";
        cin >> d[i];

        if (d[i] > pd) { 
            cout << "ALTO \n";
        }
        else if (d[i] < pd) { 
            cout << "BAIXO \n";
        }
        else {
            cout << "PATAMAR \n";
        }

        pd = d[i]; 
    }
}