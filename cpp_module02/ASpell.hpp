#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const std::string &name, const std::string &effects);
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &tg) const;
};