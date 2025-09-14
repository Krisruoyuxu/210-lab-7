#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void reverseArray(string*arr);
void displayArray(string*arr);

int main() {
    
    string* array = new string[SIZE]{"Kris","Ruoyu","Xu","Yun","Zhu"};

    displayArray(array);

    return 0;
}

void reverseArray(string*arr){

}

void displayArray(string*arr){
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(arr+i) <<" ";
    }
    cout <<endl;
}
