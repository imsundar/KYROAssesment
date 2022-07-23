//Class Names / Struct Names: Caps
//Attributes and member methods : lowerCamelCase

#include "headers.h"

class Project
{    
    static long         projectIdSeed; 
    long                projectId; 
    Person              driver;
    Person              approver;
    vector<Person*>     contributors;
    string              objective; 
    DateDetails         dateInfo;
	vector<string>      Outcomes; 
	Status              projectStatus;
    
    vector<Task*>       tasks; 
    vector<Document*>   docs;     

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

    void taskOperation(long taskId = -1)
    {
        // switch(task event)
        // a) if add event : then create a task instance, initialise and add to vector. 
        //(During this event, generate task id)
        // b) if other event, use the task id, loop through the tasks vector get the particular task instance 
        // and then call its corresponding methods
    }

    void docsOperations()
    {
        //same logic as task operations to add documents to the project. 
        //while instantiating pas the doc name and type to construct the object.
        //Instantiate, add to docs vector, also call the upload function with ip file path
        //to physically upload and save the file. 
    }

    Document* searchDocument(string fileName) {
        for(auto& doc : docs)
        {
            if(doc->getDocName() == fileName)    
              return doc; 
        }
        return nullptr; 
    }

    Task* searchTask(long taskId)
    {
        for(auto& task : tasks)
        {
            if(task->getTaskId() == taskId)    
              return task; 
        }
        return nullptr; 
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
    Task(long id) : taskId(id) {}
    void addTask() {/*initialise the task*/}
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
    long getTaskId() {return taskId;} 
};

class Document
{    
    DocType documentType; 
    string name; 
    
    public:
    Document(string name, DocType type) : name(name), documentType(type) {}
    void upload(const string filePath) {}
    string getDocName() {return name;}
    
    ~Document() {}
};

int main()
{
    //added just for the purpose of compiling. 
    return 0; 
}