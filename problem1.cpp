#include<iostream>
using namespace std;

int elementRequired(int * ptr,int size){

    int i = 0;
    int max = 0;
    int result = 0;

    while(i!=size){
        if(max < ptr[i]){
            max = ptr[i];
        }
        i++;
    }

    //maximum elemnt of the array of nums is max and minimum is 0;

    int presence = 0;


    for(int k = 0;k<=max;k++){
        for(int j = 0;j<size;j++){
            if(k==*(ptr+j)){
                presence = 1;
                break;
            }
        }

        if(!presence){
            result = k;
            break;
        }
    }

    return result;
}

int main(){

    //create an input Array
    int size;

    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];

    for(int i = 0;i<size;i++){
        int temp;
        cout<<"Enter the element no. "<<i+1<<endl;
        cin>>temp;
        arr[i] = temp;
    }

    int *ptr = arr;

    int result;
    result = elementRequired(ptr,size);

    cout<<"The element not present in the array of nums is "<<result<<endl; 
    return 0;
}