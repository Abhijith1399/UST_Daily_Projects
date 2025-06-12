#include<iostream>
#include<queue>
#include<string>

class Jobsheduling
{
private:
    std::string username;
    int page;

public:
    Jobsheduling(const std::string& user, int p) : username(user), page(p) {}

    void job_shedulng()
    {
        while (page > 10) {
            std::cout << username << " 10" << std::endl;
            page -= 10;
        }
        if (page > 0) {
            std::cout << username << " " << page << std::endl;
        }
    }

    int getPages() const {
        return page;
    }

    std::string getUsername() const {
        return username;
    }
};

int main()
{
    std::queue<Jobsheduling> jobqueue;
    jobqueue.push(Jobsheduling("Alice", 25));
    jobqueue.push(Jobsheduling("Bob", 15));
    jobqueue.push(Jobsheduling("Charlie", 5));

    while (!jobqueue.empty()) {
        Jobsheduling job = jobqueue.front();
        jobqueue.pop();
        job.job_shedulng();
    }

    return 0;
}
