//Class Names / Struct Names: Caps
//Attributes and member methods : lowerCamelCase

#include "headers.h"

class Project
{    
    static long     projectIdSeed; 
    long            projectId; 

	Person          driver;
	Person          approver;
	vector<Person*> contributors;
	string          objective; 
    DateDetails     dateInfo;
	vector<string>  Outcomes; 
	Status          projectStatus;

    vector<Task*> tasks; 
    vector<Document*> docs;     

    public:
    Project() {
        projectId = projectIdSeed++; 
        projectStatus = Status::yetToStart; 
        initialiseProject(); 
    } 

    void initialiseProject() {
        //Get front end data and initialise driver, approver, contributors,
        //expected start date, exp due date
    } 

    void startProject()
    {
        //updated actualStartDate to curr system time. 
        //Use c++ tm struct to populate Date variable. <ctime> 

        projectStatus = Status::inProgress; 
    }

    void markComplete()
    {
        //update project completion date. 
        projectStatus = Status::completed; 
    }

    virtual ~Project() {}
};

long Project::projectIdSeed = 1001; 


class Task
{
    long taskId;
    string title, description; 
    DateDetails dateInfo; 
    Task* dependencyTask = nullptr; 
    vector<string> dependencyResources {};
    vector<long> taggedJiraIssues{}; 
    vector<string> comments {}; 

    public:
    void addTask() {}
    void updateTask(Action action) {
        switch(action)
        {
          case Action::updateComments:
          break; 
          case Action::updateDependency:
          break;
          case Action::updateHindranceImpact:
          break; 
          default:
          break;          
        }        
    } 
    void startTask() {}
    void displayTask() {}
    void markComplete() {}
};

int main()
{
    return 0; 
}