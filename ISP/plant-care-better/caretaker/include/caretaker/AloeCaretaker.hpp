#pragma once
#include "caretaker/WaterDevice.hpp"
#include "caretaker/WindowDevice.hpp"

namespace caretaker {
class AloeCaretaker : public interfaces::WaterDevice,  public interfaces::WindowDevice {
    bool windowBlindsOpen = true;

public:
    void pourWater() override;
    void sprinkleWater() override;

    void openWindowBlinds() override;
    void closeWindowBlinds() override;
};
} // namespace caretaker