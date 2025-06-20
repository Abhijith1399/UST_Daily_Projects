#pragma once
#include <iostream>
#include <string>
#include "employe.h"

using namespace std;

class Manager : public Employee {
protected:
    int var_percentage = 0;
    string task;
    int DA = 0;

public:
    Manager() = default;

    Manager(const string& task, int var_percentage)
        : Employee(pf, salary), var_percentage(var_percentage), task(task), DA(DA) {}

    void setVarPercentage(int var_percentage) { this->var_percentage = var_percentage; }
    int getVarPercentage() const { return var_percentage; }

    void setTask(const string& task) { this->task = task; }
    string getTask() const { return task; }

    void setDA(int DA) { this->DA = DA; }
    int getDA() const { return DA; }
};
