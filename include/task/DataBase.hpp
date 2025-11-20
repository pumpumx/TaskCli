#include <memory>
#include <vector>

namespace task
{
    class Task; //Forward declaration -> tells that a class exists somewhere with name Task , but don't import it yet
    class DataBase
    {
    public:
        virtual ~DataBase();
        virtual void save(std::vector<Task> tasks);
        virtual std::vector<Task> load() = 0;
    };
}
