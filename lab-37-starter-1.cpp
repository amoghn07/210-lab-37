#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <list>
using namespace std;

//prototype for func
int gen_hash_index(string);


int main() {
    //input file stream to take in data
    ifstream fin;
    string val;

    //map for storing key-values
    map<int, list<string>> hash_table;

    fin.open("lab-37-data-3.txt");

    //error handle
    if (!fin.is_open()) {
        cout << "could not open the file.";
        return 1;
    }

    while (fin >> val){
        int index = gen_hash_index(val);
        hash_table[index].push_back(val);
    }

    fin.close();

    return 0;
}

int gen_hash_index(string s){
    int sum = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++){
        sum += (int) s[i];
    }
    //returning hash index
    return sum;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
