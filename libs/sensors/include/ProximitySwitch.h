#pragma once

#include "Sensor.h"
#include "mbed.h"

namespace Sensor {
    class ProximitySwitch final : Sensor {
        public:
         ProximitySwitch(PinName proximity_in);

        //read returns 1 for HIGH, and 0 for LOW
        float read() override{};
        float alternateRead() override{};
        bool getStatus() const override{};
        [[nodiscard]] bool reset() override;
        [[nodiscard]] bool update() override;

        private:
         AnalogIn m_proximity_in_adc;
    };
}  // namespace Sensor