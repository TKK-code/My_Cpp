#include <iostream>

using namespace std;

void sort(int array[], int size){
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] < array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        
    }
}


int main(int argc, char const *argv[]) {

    #ifndef Output
        freopen("Cpp/output.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int array[] ={23,54,67,21,42,78,65,12};

    // The size of the array

    int n = sizeof(array)/sizeof(array[0]);
    
    sort(array,n);

    for(auto i : array){
        cout << i << " ";
    }
    
    return 0;
}