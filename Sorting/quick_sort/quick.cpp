#include <iostream>
#include <vector>

using namespace std;

//Lomuto Partition Scheme
int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j <= high - 1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return(i + 1);
}

void quick(vector<int>& arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quick(arr, low, pi - 1);
        quick(arr, pi + 1, high);
    }
}

void printArray(const vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 9, 3, 1, 10, 4, 8, 7, 2, 6};
    int n = arr.size();
    cout << "Array sebelum diurutkan: " << endl;
    printArray(arr);
    cout << endl;

    quick(arr, 0, n - 1);

    cout << "Array setelah diurutkan: " << endl;
    printArray(arr);
    return 0;
}
