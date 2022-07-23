#include <string>
#include <vector>
using namespace std; 

struct Person
{
    string name; 
    int empId; 
}; 

struct Date
{
    int year;
    int month;
    int date; 
    
    int hour;
    int min;
    int sec;     
};

struct DateDetails
{
    Date expStartDate; 
	Date expDueDate;
    Date actualStartDate; 
    Date completionDate;
};   

enum class Status
{
    yetToStart, 
    inProgress,
    completed
};

enum class Action
{
    updateComments,
    updateDependency, 
    updateHindranceImpact
}; 

enum class DocType
{
   goals, 
   standards,
   otherDocs
}; 

class Task;
class Document; 