#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    map<string, int> book;
    string input;
    int max_book = 0;
    string result;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(book.find(input) == book.end()){
            book.insert({input,1});
        }else{
            book[input]++;
        }
    }

    for(auto i = book.begin(); i != book.end(); i++){
        max_book = max(max_book,i->second);
    }
    for (auto i = book.begin(); i != book.end(); i++) {
		if (max_book == i->second) {
			result = i->first;
			break;
		}
	}
    cout <<result <<endl;

}