#ifndef __ STUDENT__

#define __STUDENT__
#include<string>
using namespace std;
class  Student {

private:
	string stdname;
	int stdId;
	string dept;
	float avg;
	int maths;
	int phy;
	int chem;


public:
	
	void setstdname(string);
	string getstdname();
	void setstdId(int);
	int getstdId();
	void setdept(string);
	string getdept();
	void setavg(float);
	float getavg();
	void setmaths(int);
	int getmaths();
	void setphy(int);
	int getphy();
	void setchem(int);
	int getchem();
	int average();
	void grade();
	void display();
	void get_mark();
	void studentPersonal();
	int avrgs,total;


};
#endif
