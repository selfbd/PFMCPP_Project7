#pragma once

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hitPoints, int armor);

    std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
};
