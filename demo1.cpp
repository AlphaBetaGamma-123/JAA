#include <iostream>
#include <string>

using namespace std;


class Student {
    
    // The ability to add access levels, in class. 
    private:  
         string name; 
         int ID; 
         double grade; 
    
    // Other objects from other classes can interact. Creating a function (that returns the name ) here to access data members that are private. 
    public: 
    // Function to intalise data members. Constructer. 
    Student (string s_name, int s_ID, double s_grader) {
        name = '';
        ID = 0;
        grade = 0.0; 
    }

    string get_name() {return name;} // This function allows to access 'name' from the data member.
    int get_ID() {return ID;}
    double get_grade() {return grade;}

    // Another public set of functions to access private. 
    void set_name(string new_name) {name = new_name};
    void set_grade(double new_grade) {name = new_grade};
    void set_ID(int  new_name) {name = new_name};
}; 

int main {

    Student s1 ("amey", 1850125, 50); // s1 is the 'object'. Object from class. 

    // s1.name = "amey"; -> wont work because it is declared as private. So another set of public function is needed to access private. 
    // print it out.
    s1.set_name("amey"); // Chaning the data member. 

    cout << s1.set_name << endl; // Accessing changed data member. 


    return 0; 
}