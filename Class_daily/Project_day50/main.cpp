#include <iostream>
#include <map>
#include <vector>
#include "Admin.h"

int main() {
   
    map<string, vector<Admin>> idpassstore;
    map<string, vector<Admin>>managerdetails;
    map<string, vector<Admin>>developdetails;
    Admin admin;


   // admin.createManager(managerdetails);
    admin.updatemanager(managerdetails);
    admin.displaytemanager(managerdetails);

   // admin.displayDeveloper(developdetails);

    //admin.createmanagerUid_pass(idpassstore);
  // admin.createEmpUid_pass(idpassstore);

  // admin.createdeveloper(developdetails);
  // admin.adminLock("death");S
  // admin.updateDeveloper(developdetails);

  //  admin.updateDeveloper(developdetails);
   
    return 0;
}
