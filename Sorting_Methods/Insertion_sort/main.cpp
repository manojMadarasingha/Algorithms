
#include <iostream>
#include <array>
#include <bits/stdc++.h>

using namespace std;

class InsertionSort{
public:

    void sortarray(int elements[],int size){
        int key;
        int j;


        for (int i=1;i<size;i++){
            // assign the key to the variable
            key = elements[i];
            j=i-1;

            // compare the element fo the array with the key
            while(j>0 && elements[j]>key){
                elements[j+1]=elements[j];
                j=j-1;
            }
            elements[j++]=key;

        }

        for (int i=0;i<size;i++ ){
            cout<<elements[i]<<endl;
        }
    }
};

int main()
{
    // Obkect created
    int arr[10]={3,1,1,2,5,6,7,4,5,4};
    int size = *(&arr + 1) - arr;
    InsertionSort sort_object;
    sort_object.sortarray(arr,size);

    return 0;
}

