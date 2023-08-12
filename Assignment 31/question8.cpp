// Define function to print a substring from startindex (inclusive) to endindex(exclusive). define function in such a way that if second argument is not provided, string wil print till he last possible index.
#include <iostream>
#include <cstring>
using namespace std;
void subString(char[], int, int = 0);
int main()
{
    char ch[20];
    cout << "Enter any word: ";
    cin.getline(ch, 20);
    subString(ch, 2);

    return 0;
}
void subString(char ch[], int sIndex, int eIndex)
{
    int i;
    if (eIndex == 0)
    {
        eIndex = strlen(ch);
        for (i = sIndex; i < eIndex; i++)
        {
            cout << ch[i];
        }
    }
    else
    {
        for (i = sIndex; i < eIndex; i++)
        {
            cout << ch[i];
        }
    }
}