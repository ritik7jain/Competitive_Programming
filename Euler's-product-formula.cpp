
// C++ program to calculate Euler's Totient Function 
// using Euler's product formula 
#include <bits/stdc++.h> 
  
int phi(int n) 
{ 
    float result = n; 
  
    for (int p = 2; p * p <= n; ++p) { 
          
        if (n % p == 0) { 
              
            // If yes, then update n and result 
            while (n % p == 0) 
                n /= p; 
            result *= (1.0 - (1.0 / (float)p)); 
        } 
    } 
  
    if (n > 1) 
        result *= (1.0 - (1.0 / (float)n)); 
  
    return (int)result; 
} 
  
int main() 
{ 
    int n; 
    for (n = 1; n <= 10; n++) 
        cout<<"phi("<<n<<") = "<<phi(n)); 
    return 0; 
} 
