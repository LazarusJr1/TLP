#include <iostream>
#include <string>

void main() {
    using namespace std;
    int d, count = 0, i;
    string f;
    cout << "Count vowels (1) \nExit (0)\n";
    cin >> d;
    switch (d)
    {
    case 1:
            cout << "Say a word \n";
            cin >> f;
            for (i = 0; i < f.length(); i++)
            {
                if (f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o' || f[i] == 'u' || f[i] == 'A' || f[i] == 'E' || f[i] == 'I' || f[i] == 'O' || f[i] == 'U')
                {
                    count++;
                }
            }
            cout << "There are " << count << " vowels \n";
    case 0:
        cout << "Exiting";
        break;
    default:
        break;
    }
}