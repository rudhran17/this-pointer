#include<iostream>
using namespace std;
class Book{
    private:
        string name;
        string no;
    public:
        void setName(string name){         // a setter function used to set private methid to public
            this->name = name;             //this keyword to specify this->name means private method not local variable
                                        //this = this will assign it to empty string  
        }
        string getName(){
            return name;                // a getter function used to get the name 
        }
};
int main(){
    Book b1;                        //book object
    b1.setName("C++ Basics");        //setting the name using the method
    cout<<"The name of the book is "<<b1.getName()<<endl;
    return 0;
}
