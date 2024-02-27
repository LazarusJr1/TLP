#include <iostream>
#include <string>
void main()
{
    using namespace std;

   
    int i, d, repeat = 1, s[5], c = 0, k[5], h = 0; 
    string name = { "Player" }; 
    srand(time(0)); 
    for (i = 0; i <= 4; i++)
    {
        s[i] = (rand() % 2); 
    }
   
    do
    {
        cout << "1 = Enter player name \n";
       
        cout << "2 = Play \n";
       
        cout << "0 = Exit \n";
       
        cin >> d; 
        
        switch (d)
        {
        case(1):
        {
            cout << "Player Name: ";
           
            cin >> name; 
           
            break;
        }
        case(2):
        {
            do {
                c = 0; 
      
                for (i = 0; i <= 4; i++)
                {
                    cout << "Input 1 or 0 \n";
                    
                    cin >> k[i]; 
                    
                    if (k[i] == s[i])
                    {
                        c = c + 1; 
                    }
                }
                cout << name << " was right " << c << " time(s) in the right space \n";
          
                if (h == 10 && c != 5)
                    cout << name << " lost. \n";
                
                if (h != 10 && c == 5)
                    cout << name << " lost. \n";
                
                if (h != 10 && c != 5)
                    cout << name << " lost. \n";
                
                if (h == 10 && c == 5)
                    cout << name << " lost. \n";
               
                h++;
               
                cout << "\n" << name << " used " << h << " tries \n";
            } while (h != 10 && c != 5);

            break;
        }
        case(0):
        {
            repeat = 0;

            break;
        }
        default:
        {
            cout << "Wrong number, try again \n";
        }
       
        }
    
    } while (repeat != 0 || c == 5); 
}