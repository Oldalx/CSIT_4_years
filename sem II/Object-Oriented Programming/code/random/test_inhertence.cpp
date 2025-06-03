#include <iostream>
using namespace std;

class book{
    public:
        string title;
        string author;
        int pages;
        void print(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Pages: " << pages << endl;
        }

        
};
int main(){
    book It_end_with_us;
    It_end_with_us.title = "It ends with us";
    It_end_with_us.author = "Colleen Hoover";
    It_end_with_us.pages = 384;
    It_end_with_us.print();

}