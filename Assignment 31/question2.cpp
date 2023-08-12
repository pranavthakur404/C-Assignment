// Define a function to sort an array of string in ascending or descending order depending on bool type argument (true for ascending and false for descending ) Use default argument to implement it.
#include <iostream>
#include <cstring>
using namespace std;
void sortingString(char[], int = 1);
int main()
{
    char ch[20];
    cout << "Enter any word: ";
    cin.getline(ch, 20);
    cout << ch;
    sortingString(ch,0);
    cout << endl;
    cout << ch;
    return 0;
}
void sortingString(char ch[], int choice)
{
    int i, len, r, temp;
    len = strlen(ch);

    if (choice)
    {
        for (r = 1; r < len; r++)
        {
            for (i = 0; i < len - r; i++)
            {
                if (ch[i] > ch[i + 1])
                {
                    temp = ch[i];
                    ch[i] = ch[i + 1];
                    ch[i + 1] = temp;
                }
            }
        }
    }
    else
    {
        for (r = 1; r < len; r++)
        {
            for (i = 0; i < len - r; i++)
            {
                if (ch[i] < ch[i + 1])
                {
                    temp = ch[i];
                    ch[i] = ch[i + 1];
                    ch[i + 1] = temp;
                }
            }
        }
    }
}
