#ifndef STAFF_H
#define STAFF_H

#include <string>
#include <vector>

class Staff {
public:
    Staff(const string& id, const string& name, const string& position, const string& contactInfo);
    void assignTask(const string& task);
    void completeTask(const string& task);
    void updateContactInfo(const string& newContactInfo);
    void manageInventory();

private:
    string staffID;
    string name;
    string position;
    string contactInfo;
    vector<string> assignedTasks;
};

#endif // STAFF_H
