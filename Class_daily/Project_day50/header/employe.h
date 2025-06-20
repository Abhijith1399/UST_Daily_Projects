#pragma once
#include <iostream>
#include <string>

class Employee {
protected:
    float salary;
    int pf;
    

public:
    Employee() = default;
    Employee(float salary,int pf) : salary(salary), pf(pf) {}


    void setSalary(float salary) {
        this->salary = salary;
    }
    float getSalary() const {
        return salary;
    }
    void setPF(int pf) {
        this->pf = pf;
    }
    int getPF() const {
        return pf;
    }

  
   
    
};
