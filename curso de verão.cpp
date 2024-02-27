#include <iostream>

#include <math.h>

void main()
{
    using namespace std;
   
    int d, p;
   
    float price, v, decimals;

    do
    {
        
        cin >> price;
       
        cin >> d;
     
        cin >> p;
    
    } while (price <= 100 && price > 100000);

    price = price /100;
   
    price =price - price * 0.25;
   
    d= price - trunc(price);
       
    v = trunc(price) + 0.5;
  
    price = v;

    if (p > 3)
    {
        price = price - price * 0.5;
        
        decimals = price - trunc(price);
       
        if (decimals > 0.5)
        {
           
            v = trunc(price) + 1;
       
        }
        
        else
        {
           
            v = trunc(price) + 0.5;
       
        }
    }

    if (d > 4 && d < 8)
    {
        
        price = price -price * 0.4;
        
        decimals =price - trunc(price);
       
        if (decimals > 0.5)
        {
            
            v = trunc(price) + 1;
       
        }
      
        else
        {
         
            v = trunc(price) + 0.5;
       
        }
        
        price = v;
    }
   
    else if (d > 8)
    {
        
        price = price - price * 0.65;
       
        decimals = price - trunc(price);
       
        if (decimals > 0.5)
        {
           
            v = trunc(price) + 1;
       
        }
       
        else
        {
           
            v = trunc(price) + 0.5;
       
        }
        price = v;
    }
   
    price = v * 100;
    
    cout << price;







}