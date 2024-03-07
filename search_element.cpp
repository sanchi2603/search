#include<iostream>
using namespace std;
int searcharray(int array[], int size , int mynum);
int main(){
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int index;
    int size = sizeof(number)/sizeof(number[0]);
    int mynum;

    cout<<"enter your element for search";
    cin >> mynum;

    index = searcharray( number,size,mynum);
    if (index!=-1){
        cout<< index;
    }
    else {
        cout << "no";
    }


}

int searcharray(int array[], int size , int mynum){
    for (int i = 0 ; i < size ; i++ ){
        if (array[i] ==mynum){
            return i;
        }
    }
    return -1;
}