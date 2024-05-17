#include <cmath>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

main()
{
    vector<string> terms;
    string polynomial;
    cout << "Please enter a polynomial with no spaces > ";
    cin >> polynomial;

    int parsing_start = 0;
    int term_length = 0;

    for (int i = 0; i < polynomial.length(); i++)
    {
        if (polynomial[i] == '+' || polynomial[i] == '-')
        {
            term_length = i - parsing_start;
            terms.push_back(polynomial.substr(parsing_start, term_length));
            parsing_start = i;
        }
        else if (i == polynomial.length() - 1)
        {
            int term_length = 2;
            terms.push_back(polynomial.substr(parsing_start, term_length));
        }
    }

    for (int i = 0; i < size(terms); i++)
    {
        string term = terms[i];
        if (term[0] == '-')
        {
            terms[i] = terms[i].substr(0, 2);
        }
        else
        {
            terms[i] = terms[i].substr(0, 1);
        }
    }

    int p = stoi(terms[0]);
    int q = stoi(terms[1]);
    int r = stoi(terms[2]);

    cout << p << " " << q << " " << r << endl;

    return 0;
}