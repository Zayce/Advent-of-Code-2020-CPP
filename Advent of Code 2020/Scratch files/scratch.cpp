#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;



vector<int> getInput() {
    ifstream file("C:\\Users\\Zoella\\CLionProjects\\Advent of Code 2020\\Input\\Day1_Input.txt");
    string str;
    vector<int> vect;
    while (getline(file,str)){
        array.push_back(stoi(str));}
    sort (array.begin(), array.end());
    return vect;
}
/*
int find(){
    vector<int> array = getInput();
    int length = array.size();
    int n =  length - 1;
    int i = 0;
    while (i != n) {
        int x = 2020 - array[i];
        int n =  length - 1;
        int m =  i + 1;
        do {
            if (x == (array[n] + array[m]) {
                int y = 2020 - array[n];

                cout <<  x*y*x << endl;
                return 0;
            } else {
                n--;
            }
        }
        while (i != n);
        i++;
    }
}
*/


int main() {
    vector<int> array = getInput();
    for (int q = 0; q < 10; q++){
        cout << array[q] << endl;
    }
    return 0;
}

