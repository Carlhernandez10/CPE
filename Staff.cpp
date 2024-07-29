#include "Staff.h"

Staff::Staff(const std::string& id, const std::string& name, const std::string& position, const std::string& contactInfo)
    : staffID(id), name(name), position(position), contactInfo(contactInfo) {}

void Staff::assignTask(const std::string& task) {
    assignedTasks.push_back(task);
}

void Staff::completeTask(const std::string& task) {
    for (auto it = assignedTasks.begin(); it != assignedTasks.end(); ++it) {
        if (*it == task) {
            assignedTasks.erase(it);
            break;
        }
    }
}

void Staff::updateContactInfo(const std::string& newContactInfo) {
    contactInfo = newContactInfo;
}

void Staff::manageInventory() {
    // Implement inventory management
}
