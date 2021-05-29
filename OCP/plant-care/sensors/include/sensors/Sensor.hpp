#pragma once

#include <chrono>
#include <mutex>
#include <set>

#include "caretaker/PlantCaretaker.hpp"

namespace sensors{
  class Sensor{
    public:
      std::set<caretaker::PlantCaretaker*> caretakers;
      virtual ~Sensor() = default;
      virtual void subscribe(caretaker::PlantCaretaker&) = 0;
      virtual void operator()() = 0;
  };
}
