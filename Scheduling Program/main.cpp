//
//  main.cpp
//  Scheduling Program
//
//  Created by Makori Chacha on 2022-04-07.
//
#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class AssignmentPlanner{
public:
    string courseName;
    int numberOfUnits;
    int numberOfAssignments;
private:
    //MARK: Constructors
    AssignmentPlanner(const string cName){
        courseName = cName;
    }
    
    AssignmentPlanner(AssignmentPlanner &temp){
        courseName = temp.courseName;
        numberOfUnits = temp.numberOfUnits;
        numberOfAssignments = temp.numberOfAssignments;
    }
    //MARK: Getters
    string getCourseName(){
        return courseName;
    }
    int getUnitNumbers(){
        return numberOfUnits;
    }
    int getAssignmentCount(){
        return numberOfAssignments;
    }
    
    //MARK: Setters
    void setCourseName(const string cName){
        courseName = cName;
    }
    void setUnitCount(const int unitCount){
        numberOfUnits = unitCount;
    }
    void setAssignmentCount(const int assignmentCount){
        numberOfAssignments = assignmentCount;
    }
  
};
//These should be non-member functions, if they're member functions then they should be made as friend functions
//MARK: Overloaded operators for the class.

ostream& operator << (ostream &out, AssignmentPlanner const& data) {
    out << "Course name: "<< data.courseName << endl;
    out <<"Number of units obtained upon successful completion of the course"<< data.numberOfUnits << endl;
    out << "Number of assignments that need to be completed by the course"<< data.numberOfUnits << endl;
    return out;
}


int main(int argc, const char * argv[]) {
    //I want to create a program that will help me schedule my assignments and help me keep up with deadlines
    
    cout << "Hi, I'm your Student Success Assistant and I am going to help you plan your assignments out based how many days you have until the due date and how long your assignments are" << endl;
    
    cout << endl;
    
    //Things to consider when making program
    int nofCourses;
    cout << "How many courses are you taking this semester" << endl;
    cin >> nofCourses;
    
    if(nofCourses >= 4 && nofCourses <=6)
        cout << "Wow, that's alot of courses you're taking, don't worry, I'm gonna make sure you're always on track." << endl;
    else if (nofCourses > 6){
        cout << "That's too many courses, you can't take that many." << endl;
        abort();
    }
   else
       cout << "That's great, not too many courses this time around I see." << endl;
    
    cout << endl;
    vector<string> CourseVector;
    
    cout << "Enter the names of the courses that you're taking." << endl;
    //Declare a counter
    int count = 0;
    string courseName;
    while(count < nofCourses)
    {
        cin>>courseName;
        count++;
    }
    
    cout << endl;
    
    cout << "Great job, now that you've entered the names of the courses you're taking, let's start planning these assignments." << endl;
    
   //Create a data structure with a key value pair that says how many assignments you've got and the name of the course.
    
    
    //system("Pause");
    
    return 0;
}
