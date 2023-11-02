#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class SpellBook {
    public:
        std::map<std::string, ASpell *> map;
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*sp);
        void forgetSpell(std::string const &sp_name);
        ASpell* createSpell(std::string const &sp_name);
};