

#include<iostream>
#include<fstream>
#include"Admin.h"
#include <sstream>
#include <mutex>
#include <thread>
using namespace std;


void Admin::createmanagerUid_pass(map<string, vector<Admin>>& idpassstore)
{
    string demopass;
    cout << "enter Manager User_id:" << endl;
    cin >> manager_uid;
    cout << "enter manager password:" << endl;
    cin >> manager_pass;
    cout << "Re-enter manager password:" << endl;
    cin >> demopass;
    if (demopass == manager_pass)
    {
        Admin Adobj(manager_uid, "", manager_pass, "", "", "", "", "", 0, 0, 0.0f, 0, "", "");
        idpassstore[manager_uid].emplace_back(Adobj);


    }
    cout << "manager uid and password created" << endl;


    ofstream outfile("uid_pass.txt", ios::app);
    if (outfile.is_open())
    {
        outfile << manager_uid << "|" << manager_pass << endl;
    }
    outfile.close();

}
void Admin::updatemanager(std::map<std::string, std::vector<Admin>>& managerdetails)
{
    std::string Id;
    std::cout << "Enter manager id: ";
    std::cin >> Id;

    auto it = managerdetails.find(Id);
    if (it == managerdetails.end()) {



        // Gather updated fields
        int da, vp, hike, pf;
        std::string task;
        std::cout << "Add DA: "; std::cin >> da;
        std::cout << "Update variable percentage: "; std::cin >> vp;
        std::cout << "The task: "; std::cin >> task;
        std::cout << "Update hike: "; std::cin >> hike;
        std::cout << "Give PF: "; std::cin >> pf;

        // Update in-memory object
        Admin& mngr = it->second[0];
        mngr.setDA(da);
        mngr.setVarPercentage(vp);
        mngr.Mobj.setTask(task);
        mngr.Eobj.setSalary(hike);
        mngr.Eobj.setPF(pf);
        std::cout << "Manager updated in memory.\n";

        // Build the updated line
        std::string name = mngr.name, address = mngr.adress;
        std::string updatedLine = Id + "|" + name + "|" + address + "|" + task + "|" +
            std::to_string(vp) + "|" + std::to_string(da) + "|" +
            std::to_string(hike) + "|" + std::to_string(pf);

        // Read all lines into memory
        std::vector<std::string> lines;
        std::ifstream infile("details.txt");
        if (infile.is_open()) {
            std::string line;
            while (std::getline(infile, line)) {
                if (line.rfind(Id + "|", 0) == 0) lines.push_back(updatedLine);
                else lines.push_back(line);
            }
            infile.close();
        }
        else {
            std::cerr << "Error opening details.txt for reading\n";
            return;
        }

        // Rewrite the file
        std::ofstream outfile("details.txt", std::ios::trunc);
        if (!outfile.is_open()) {
            std::cerr << "Error opening details.txt for writing\n";
            return;
        }
        for (const auto& l : lines) {
            outfile << l << "\n";
        }
        outfile.close();

        std::cout << "details.txt rewritten with updated record.\n";
    }
}
