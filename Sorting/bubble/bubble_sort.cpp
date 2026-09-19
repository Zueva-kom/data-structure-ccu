#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> & v){
    int n = v.size();

    for (int i = 0; i < n -1; i++){
        for (int j = 0; j < n -i - 1; j++){
            if (v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v = {55, 39, 28, 80, 46};
    bubbleSort(v);
    for (auto i : v)
        cout << i << " ";   
}