#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<int> getInput() {
    ifstream file(C:\Users\Zoella\CLionProjects\Advent of Code 2020\Input);
    string str;
    vector<int> array;
    while (getLine(file,str)){
        array.push_back(stoi(str));
    }
    return array;

}
int length = array.size();



int find(int array){
    int n = length - 1;
    int i = 0;
    while (i != n) {
        int x = 2020 - array[i];
        do {
            if (x == array[n]) {
                int y = 2020 - array[n];
                return x*y;
            } else {
                n--;
            }
        }
        while (x != array[n+1]);
        cout << array[i] << endl;
        cout << n << endl;
        i++;
    }
}

int main() {
    getInput();
    find();
    return 0;
}