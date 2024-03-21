#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int x;
    double y;
    char z;
    cin >> x >> y >> z;
    try
    {
        if (x < 0)
            throw x;
        if (y < 0.0)
            throw y;
        if ((z >= 'A' && z <= 'Z') || (z >= 'a' && z <= 'z'))
        {
        }
        else
        {
            throw z;
        }
    }
    catch (int x)
    {
        cout << "Exception caught in integer" << endl;
    }
    catch (double y)
    {
        cout << "Exception caught in double" << endl;
    }
    catch (char z)
    {
        cout << "Exception caught in char" << endl;
    }
    return 0;
}