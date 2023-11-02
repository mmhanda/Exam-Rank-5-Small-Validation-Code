#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"
#include <map>

class TargetGenerator {
    public:
        std::map<std::string, ATarget *> map;
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*tg);
        void forgetTargetType(std::string const &tg_type);
        ATarget* createTarget(std::string const &tg_type);
};