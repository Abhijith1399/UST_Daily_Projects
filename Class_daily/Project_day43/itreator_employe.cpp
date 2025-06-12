#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<algorithm>

class Employe
{
	int empid;
	std::string name;
public:
	Employe()
	{
		empid = 0;
		name = " ";
	}
	Employe(int empid, std::string name) :empid(empid), name(name){}

	void setname(std::string name) { this->name = name; }std::string getname() { return name; }
	void setid(int empid) { this->empid = empid; }int getempid() { return empid; }

	friend std::istream& operator>>(std::istream& is, Employe& e)
	{
		is >> e.empid;
		is >> e.name;
		return is;
	}
	void display()
	{
		std::cout << "Name=" << name << std::endl;
	    std::cout << "empid=" << empid << std::endl;
	}

};
int main()
{
	std::istream_iterator<Employe> inItr(std::cin);
	std::istream_iterator<Employe> enditr;
	std::vector<Employe>emp;


	while (inItr != enditr)
	{
		emp.push_back(*inItr);++inItr;
	}
	for (auto e : emp)
	{
		e.display();
	}
	return 0;
}