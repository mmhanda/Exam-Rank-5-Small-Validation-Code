#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const {
    return this->name;
}

const std::string &ASpell::getEffects() const {
    return this->effects;
}

ASpell::ASpell(const std::string &name, const std::string &effects) {
    this->name = name;
    this->effects = effects;
}

void ASpell::launch(const ATarget &tg) const {
    tg.getHitBySpell(*this);
}