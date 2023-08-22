#include<iostream>
using namespace std;
class student{
    private:
        int rollno=1203,year=2;
        string section="it",campus="acet";
    public:
        
        void display();
}; 
void student::display(){      
    cout<<rollno<<endl<<year<<endl<<section<<endl<<campus<<endl;
}
int main()
{
    student gamma;
    gamma.display(); 
}