#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> a, int b){
    for (int j = 0; j < b; j++)
    {
        cout<<a[j]<<endl;
    }
}
int main(){
    int size;
    cout<<"Enter the size of vector\n";
    cin>>size;
    vector<int> name(size);
    cout<<"Enter the elements of vectors\n";
    for (int i = 0; i < size; i++)
    {
        cin>>name[i];
    }
    display(name, size);
    return 0;
}
