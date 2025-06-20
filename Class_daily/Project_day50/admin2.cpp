#include<iostream>
#include<fstream>
#include"Admin.h"
#include <sstream>
#include <mutex>
#include <thread>
using namespace std;

void Admin::updateDeveloper(std::map<std::string, std::vector<Admin>>& developdetails) {
    std::string Id;
    std::cout << "Enter employee id: ";
    std::cin >> Id;

    auto it = developdetails.find(Id);
    if (it == developdetails.end()) {
       
    }

    int sal, pf;
    std::cout << "Salary to developer: ";
    std::cin >> sal;
    std::cout << "PF to developer: ";
    std::cin >> pf;

    Admin& Empd = it->second[0];
    Empd.Eobj.setSalary(sal);
    Empd.Eobj.setPF(pf);
    std::cout << "Employee updated in memory.\n";

    std::string name = Empd.name;
    std::string address = Empd.adress;
    std::string updated = Id + "|" + name + "|" + address + "|" +
        std::to_string(sal) + "|" + std::to_string(pf);

    // Read all lines
    std::vector<string> lines;
    std::ifstream infile("details.txt");
    if (!infile) {
        std::cerr << "Error opening details.txt for reading\n";
        return;
    }

    std::string line;
    while (std::getline(infile, line)) {
        if (line.rfind(Id + "|", 0) == 0) {
            lines.push_back(updated);
        }
        else {
            lines.push_back(line);
        }
    }
    infile.close();

    // Rewrite all lines
    std::ofstream ofile("details.txt", std::ios::trunc);
    if (!ofile) {
        std::cerr << "Error opening details.txt for writing\n";
        return;
    }
    for (const auto& l : lines) {
        ofile << l << "\n";
    }
    ofile.close();

    std::cout << "details.txt rewritten with updated record.\n";
}
