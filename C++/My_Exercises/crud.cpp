#include<iostream>
using namespace std;
//global 
int arr_len = 0;
int arr[0];//initializing array
bool isArr=false;//to check array is created or not

//crud functions   
void createArr (int len);
void readArr ();
void updateArr(int index, int element_value);

int main(){
while(true){
char option;    
cout<<"to create--> c\nto read --> r\nto update--> u\nto delete--> d\nany key to exit"<<endl; 
cin>>option;  
if(option=='c'){
    int l;
    cout<<"enter lenght: ";
    cin>>l;
    arr_len = l;
    createArr(l); 
    cout<<"Array is created \ninput r to return menu OR any key to exit!"<<endl;
    cin>>option;
    if(option=='r'){
        continue;
    }
    else{
        cout<<"this is exit";
        break;
    }
}
else if(option=='r'){
    readArr();
    cin>>option;
    if(option=='r'){
        continue;
    }
    else{
        cout<<"this is exit";
        break;
    }
}
else if(option=='u'){
    cout<<"enter the index:";
    int i;
    cin>>i;
    cout<<endl;
    cout<<"enter the element value";
    int ele;
    cin>>ele;
    cout<<endl;
    updateArr(i,ele);
    cin>>option;
    if(option=='r'){
        continue;
    }
    else{
        cout<<"this is exit";
        break;
    }
}
else if(option=='d'){
    cout<<"this is d"<<endl;
    break;
}
else{
    cout<<"exit!"<<endl;
    break;
}
}
return 0;
}
void createArr(int len){
    arr[len];
    for(int i = 0; i<len;i++){
        int element;
        cout<<"element-"<<i+1<<">> ";
        cin>>element;
        arr[i]=element;
        cout<<endl;
    }
    isArr = true;
}
void readArr(){
    if(isArr){
        for(int i= 0; i<arr_len; i++){
           cout<<arr[i]<<" "; 
        }
    cout<<"Array is Readed!\ninput r to return menu OR any key to exit!>>"<<endl; 
    }
    else{
        cout<<"array is not created yet!\ninput r to return menu OR any key to exit!>>";
    }
}
void updateArr(int index, int element_value){
    if(isArr){
        arr[index] = element_value;
        cout<<"Array is updated!\ninput r to return menu OR any key to exit!>>"<<endl; 
    }
    else{
        cout<<"array is not created yet!\ninput r to return menu OR any key to exit!>>"; 
    }
}