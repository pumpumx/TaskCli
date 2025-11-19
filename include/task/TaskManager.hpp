#include <string>

class Task
{
private:
    int id_;
    std::string title_;
    bool isCompleted;

public:
    Task(int id, std::string title, bool completed = false);
    int getId() const noexcept { return id_;};  
    void addTitle() const noexcept {return title_;};

};
