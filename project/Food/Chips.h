#pragma once

#include "Food.h"

class Chips: Food {
public:
    Chips() = default;

    int HappinessChange() override;
    int HealthChange() override;
    int NeedToiletChange() override;
    int SatietyChange() override;
    int ForceChange() override;
};
