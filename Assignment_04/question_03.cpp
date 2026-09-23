#include<iostream>
using namespace std;

class Academic{
    public:
    int marks = 90;
};

class Sports{
    public:
    int score = 85;
};

class Result : public Academic , public Sports {
    int res = marks+ score;
    public:
    void displayDetails(){
        cout<<"Total score : "<<res;
    }
};

int main(){
    Result r;
    r.displayDetails();
    return 0;
}