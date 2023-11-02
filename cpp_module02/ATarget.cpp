#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {
    return this->type;
}

ATarget::ATarget(const std::string &type) {
    this->type = type;
}

void ATarget::getHitBySpell(const ASpell &sp) const {
    std::cout << this->type << " has been " << sp.getEffects() << "!" << std::endl;
}