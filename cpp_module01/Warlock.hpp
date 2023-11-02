#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> map;
    public:
        Warlock();
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &title);
        void introduce() const;
        void learnSpell(ASpell *sp);
        void forgetSpell(std::string sp_name);
        void launchSpell(std::string sp_name, const ATarget &tg);
};