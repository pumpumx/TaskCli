#include "TaskManager.hpp"
#include "Task.hpp"

namespace task
{

    TaskManager::TaskManager() : nextId_(1) {} // Start's id from one , tasks_ is automatically empty!!

    void TaskManager::addTask(const std::string &title)
    {
        tasks_.push_back(std::make_unique<Task>(nextId_++, title)); // Utilizes make_unique ptr -> stores the pointer referece of task!!
    }

    bool TaskManager::removeTask(const int id)
    {

        for (auto it = tasks_.begin(); it != tasks_.end(); ++it)
        {
            if ((*it)->getId() == id)
            {
                tasks_.erase(it);
                return true;
            }
        }
        return false;
    }

    bool TaskManager::completeTask(const int id)
    {
        for (auto it = tasks_.begin(); it != tasks_.end(); ++it)
        {
            if ((*it)->getId() == id)
            {
                (*it)->markComplete();
                return true;
            }
        }
        return false;
    }

    std::vector<Task> TaskManager::listTasks()const
    {
        std::vector<Task> result;
        result.reserve(tasks_.size()); // Returns a copy of the tasks_ so that the unique_ptr are not exposed;
        // Deref uinque_ptr;
        for (const auto &t : tasks_)
        {
            result.push_back(*t);
        }
        return result;
    }
}
