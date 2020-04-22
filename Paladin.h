#pragma once

struct Paladin : Character
{
    Paladin(std::string name_, int hitPoints, int armor);

    std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
