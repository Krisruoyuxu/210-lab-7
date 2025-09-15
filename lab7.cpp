#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void reverseArray(string*arr);
void displayArray(string*arr, string type);

int main() {
    
    string* array = new string[SIZE]{"Kris","Ruoyu","Xu","Yun","Zhu"};

    displayArray(array, "Original array");
    reverseArray(array);
    displayArray(array, "Reversed array");

    return 0;
}

void reverseArray(string*arr){
    string temp;
    for (int i = 0; i < (SIZE / 2); i++){
        temp = *(arr+i);
        *(arr+i) = *(arr+SIZE-1);
        *(arr+SIZE-1) = temp;
    }
}

void displayArray(string*arr, string type){
    cout << type <<": ";
    for (int i = 0; i < SIZE; i++){
        cout << *(arr+i) <<" ";
    }
    cout <<endl;
}
