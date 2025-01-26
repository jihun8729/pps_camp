#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string document, word;
    getline(cin, document);
    getline(cin, word);
    
    int answer = 0;
    for (int i = 0; document.length() > i; i++)
    {

        if (word.length() > document.length() - i)
            break;
        
        
        string tmp = document.substr(i, word.length());
        if (tmp == word)
        {

            answer++;
            i += word.length() - 1;
        }
    }
    
    cout << answer;
    
    return 0;
}
