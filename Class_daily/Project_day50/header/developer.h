#pragma once
#include <iostream>
#include <string>
#include "employe.h"

using namespace std;

class Developer : public Employee {
protected:
    int timesheet = 0;
    string task;

public:
    Developer() = default;

  
    Developer(float salary, int pf)
        : Employee(pf, salary), timesheet(0), task("") {}

    Developer(const string& task, int timesheet, float salary, int pf)
        : Employee(pf, salary), timesheet(timesheet), task(task) {}

    void setTimesheet(int timesheet) { this->timesheet = timesheet; }
    int getTimesheet() const { return timesheet; }

    void setTask(const string& task) { this->task = task; }
    string getTask() const { return task; }
};
