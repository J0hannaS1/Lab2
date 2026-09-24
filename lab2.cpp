#include <iostream>
#include <string>
using namespace std;

void missmess(string w)
{
    if (w.empty())
    {
        cout << w << endl;
    }
    else if (w.front() == 'm' && w.back() == 's')
    {
        cout << "missmess" << endl;
    }
    else if (w.front() == 'm')
    {
        cout << "miss" << endl;
    }
    else if (w.back() == 's')
    {
        cout << "mess" << endl;
    }
    else
    {
        cout << w << endl;
    }
}

int main()
{
    string word;

    cout << "Enter a word, or enter $$$ to quit: ";

    while (cin >> word && word != "$$$")
    {
        missmess(word);
        cout << "Enter a word, or enter $$$ to quit: ";
    }

    return 0;
}

/* Required test results:
   friend   -> friend
   failures -> mess
   jazz     -> jazz
   miss     -> missmess
   mine     -> miss
   money    -> miss
   mints    -> missmess
*/
