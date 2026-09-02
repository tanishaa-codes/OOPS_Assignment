#include<iostream>
using namespace std;
int main(){
    cout<<"Tanishaa Goel";
    cout<<"\nMCA 1E\n";
    
    int i=0;
    // //for loop

    for(int i; i<10; i++){
        cout<<i<<endl;
    }

    // //initialization outside the loop
    
    for(;i<10;i++){
        cout<<i<<endl;
     }

    // //initialization and incrementation outside the loop

    
    for(;i<10;)
    {
        i++;
        cout<<i<<endl;
    }

    //while loop
    
    
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    //do-while loop
    int k = 5;
    do{
        cout<<"Do-while loop."<<endl;;
        k--;
    }
    while(k>=2);

    return 0;
}