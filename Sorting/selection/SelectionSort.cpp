#include <iostream>

using namespace std;

int main()
{
    int selection[5] = {30, 50, 20, 10, 40};
    int temp;
    int angkaKecil = 0;

    cout << "Array sebelum diurutkan: ";
    for(int arr = 0; arr < 5; arr++){
        cout << selection[arr] << " ";
    }

    for(int i = 0; i < 5; i++){
        angkaKecil = i;
        for(int j = i + 1; j < 5; j++){
            if(selection[j] < selection[angkaKecil]){
                angkaKecil = j;
            }
        }
        temp = selection[i];
        selection[i] = selection[angkaKecil];
        selection[angkaKecil] = temp;
    }

    cout << "\nArray setelah diurutkan: ";
    for(int isi : selection){
        cout << isi << " ";
    }
    return 0;
}
