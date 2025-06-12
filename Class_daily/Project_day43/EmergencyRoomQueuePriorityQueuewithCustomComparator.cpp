#include <iostream>
#include <queue>
#include <string>

class Patient {
public:
    std::string name;
    int age;
    int severity;

    Patient(const std::string& n, int a, int s) : name(n), age(a), severity(s) {}
};

// Custom comparator for priority queue
struct ComparePatient {
    bool operator()(const Patient& p1, const Patient& p2) {
        // Higher severity has higher priority
        if (p1.severity != p2.severity)
            return p1.severity < p2.severity;
        // If severity is the same, older age has higher priority
        return p1.age < p2.age;
    }
};

int main() {
    std::priority_queue<Patient, std::vector<Patient>, ComparePatient> erQueue;

    // Adding patients to the queue
    erQueue.push(Patient("Alice", 30, 5));
    erQueue.push(Patient("Bob", 40, 7));
    erQueue.push(Patient("Charlie", 35, 7));
    erQueue.push(Patient("David", 50, 6));
    erQueue.push(Patient("Eve", 60, 5));

    std::cout << "Treatment order:\n";
    while (!erQueue.empty()) {
        const Patient& p = erQueue.top();
        std::cout << p.name << " (Age: " << p.age << ", Severity: " << p.severity << ")\n";
        erQueue.pop();
    }

    return 0;
}
