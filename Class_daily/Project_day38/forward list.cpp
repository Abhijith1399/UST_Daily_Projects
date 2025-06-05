#include <iostream>
#include <forward_list>

#define MAX_LOGS 5

void addLog(std::forward_list<std::string>& logs, const std::string& message) {
    logs.push_front(message);
    int count = 0;
    auto it = logs.before_begin();
    for (auto next = logs.begin(); next != logs.end(); ++next) {
        count++;
        if (count >= MAX_LOGS) {
            logs.erase_after(it);
            break;
        }
        ++it;
    }
}

int main() {
    std::forward_list<std::string> logs;

    addLog(logs, "Error: Disk Full");
    addLog(logs, "Warning: High Memory");
    addLog(logs, "Info: Connection Stable");
    addLog(logs, "Info: Heartbeat OK");
    addLog(logs, "Error: Timeout");
    addLog(logs, "Info: Recovery Complete");

    std::cout << "Last " << MAX_LOGS << " Logs:\n";
    for (const auto& log : logs)
        std::cout << log << "\n";

    return 0;
}