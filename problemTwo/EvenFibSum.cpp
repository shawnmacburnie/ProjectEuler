//Shawn Macburnie
// sum of all even valued terms in the Fibonacci sequence
// that are less then the given value or 4 million by default.

#include <iostream>

using namespace std;

int main(int argc, char* argv)
{
    int maxNumber = argc == 1 ? 4000000 : argv[1],
        sum(2),
        i = 8,
        previous = 5;

    while (i < maxNumber)
    {
        sum += i;
        for (int x = 0; x < 3;x++)
        {
            int newPrevious = i;
            i += previous;
            previous = newPrevious;
        }
    }
    cout << "The Sum of Fibonacci numbers between less then "<< maxNumber
        <<" is: " << sum << endl;
}