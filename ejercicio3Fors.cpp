#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    
    cout << "Ingrese el numero de datos: " << endl;
    cin >> n;
    
    int total = 0;
    
    for (int i = 1; i <= n; i+=2)
    {
        total = total + i;
    }
    
    cout << "El total es: " << total << endl;
    
    
    return 0;
}