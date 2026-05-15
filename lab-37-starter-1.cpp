#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//prototype for func
int sum_ascii(string);

int main() {
    //input file stream to take in data
    ifstream fin;
    string val;
    int sum = 0;

    fin.open("lab-37-data-3.txt");

    //error handle
    if (!fin.is_open()) {
        cout << "could not open the file.";
        return 1;
    }

    //while loop to read in and sum data
    while (fin >> val){
        sum += sum_ascii(val);
    }
    cout << sum;

    fin.close();

    return 0;
}

int sum_ascii(string s){
    int sum = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++){
        sum += (int) s[i];
    }

    return sum;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
