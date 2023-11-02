#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    protected:
        std::string type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget(const std::string &type);
        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &sp) const;
};