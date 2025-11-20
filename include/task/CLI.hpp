#pragma once
#include <memory>

namespace task
{
    class TaskManager;
    class CLI
    {
    public:
        explicit CLI(std::shared_ptr<TaskManager> manager);

        void run();

    private:
        std::shared_ptr<TaskManager> manager_;
        void showMenu();    
        void handleInput();
    };
}