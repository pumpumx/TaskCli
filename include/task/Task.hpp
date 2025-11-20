#pragma once
#include <string>

namespace task{
class Task
{
private:
    int id_;
    std::string title_;
    bool isCompleted_;

public:
    Task(int id, std::string title, bool completed = false);
    int getId() const noexcept { return id_;}
    std::string addTitle() const noexcept {return title_;}
    bool isCompleted() const noexcept {return isCompleted_;}
    void markComplete() noexcept {isCompleted_ = true;}
    void rename(std::string newTitle) noexcept {title_ = newTitle;}

};
}