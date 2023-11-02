#pragma once
#include <iostream>
#include <string>

class Warlock {
    private:
        std::string name;
        std::string title;
    public:
        Warlock();
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &title);
        void introduce() const;
};