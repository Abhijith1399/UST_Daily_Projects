#include <iostream>
#include <queue>
#include <string>

class Task {
public:
    std::string description;
    int priority;

    Task(const std::string& desc, int prio) : description(desc), priority(prio) {}


    bool operator<(const Task& other) const {
        return priority < other.priority; 
    }
};

class TaskScheduler {
private:
    std::priority_queue<Task> taskQueue;

public:
    void addTask(const std::string& description, int priority) {
        taskQueue.push(Task(description, priority));
    }

    void executeTasks() {
        while (!taskQueue.empty()) {
            const Task& currentTask = taskQueue.top();
            std::cout << "Executing task: " << currentTask.description
                << " with priority: " << currentTask.priority << std::endl;
            taskQueue.pop();
        }
    }
};

int main() {
    TaskScheduler scheduler;

    scheduler.addTask("Write report", 3);
    scheduler.addTask("Fix bug in code", 1);
    scheduler.addTask("Prepare presentation", 2);

    std::cout << "Task execution order:\n";
    scheduler.executeTasks();

    return 0;
}
