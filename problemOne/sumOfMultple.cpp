//Shawn Macburnie
// sum of numbers devisble by 3 and 5 either by a given range,
// or 1000 by default.

#include <iostream>

using namespace std;

int main(int argc, char* argv)
{
    int maxRange = argc == 1 ? 1000 : argv[1];
    int fiveCounter = 1;
    int i = 5;
    int sum(3);
    while (i < 1000)
    {
        sum += i;
        int modFive = i % 5;
        if (modFive == 0)
        {
            i += fiveCounter;
            fiveCounter == 3 ? fiveCounter = 1 : fiveCounter++;
        }
        else
        {
            i += (modFive <= 2 ? 3 : 5 - modFive);
        }
    }
    cout << "Sum = " << sum << endl;
}