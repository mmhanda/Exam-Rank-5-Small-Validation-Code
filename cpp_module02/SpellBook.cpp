#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell*sp) {
    this->map[sp->getName()] = sp->clone();
}

void SpellBook::forgetSpell(std::string const &sp_name) {
    if (this->map[sp_name]) {
        this->map.erase(sp_name);
    }
}

ASpell* SpellBook::createSpell(std::string const &sp_name) {
    if (this->map[sp_name]) {
        return this->map[sp_name];
    }
    return NULL;
}