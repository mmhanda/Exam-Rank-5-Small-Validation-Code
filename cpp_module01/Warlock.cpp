#include "Warlock.hpp"

const std::string &Warlock::getName() const {
    return this->name;
}

const std::string &Warlock::getTitle() const {
    return this->title;
}

Warlock::Warlock() {}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::setTitle(const std::string &title) {
    this->title = title;
}

Warlock::Warlock(const std::string &name, const std::string &title) {
    this->name = name;
    this->title = title;

    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *sp) {
    if (sp) {
        this->map.insert(std::pair<std::string, ASpell*> (sp->getName(), sp));
    }
}

void Warlock::forgetSpell(std::string sp_name) {
    if (this->map[sp_name]) {
        this->map.erase(sp_name);
    }
}

void Warlock::launchSpell(std::string sp_name, const ATarget &tg) {
    if (this->map[sp_name]) {
        ASpell *sp = this->map[sp_name];
        sp->launch(tg);
    }
}