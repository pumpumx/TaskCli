#pragma once
#include <memory>
#include <vector>
#include <string>

namespace task
{
    class Task;
    class TaskManager
    {
    public:
        TaskManager();
        void addTask(const std::string &title);
        bool removeTask(const int id);
        bool completeTask(const int id);

        std::vector<Task> listTasks()const;

    private:
        std::vector<std::unique_ptr<Task>> tasks_;
        int nextId_;
    };
} //namespace task