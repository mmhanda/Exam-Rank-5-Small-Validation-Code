#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget*tg) {
    this->map[tg->getType()] = tg->clone();
}

void TargetGenerator::forgetTargetType(std::string const &tg_type) {
    if (this->map[tg_type]) {
        this->map.erase(tg_type);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &tg_type) {
    if (this->map[tg_type]) {
        return this->map[tg_type];
    }
    return NULL;
}