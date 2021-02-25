#pragma once

#include <cstdint>
#include <FreeRTOS.h>
#include <timers.h>
#include "Screen.h"
#include <lvgl/lvgl.h>
#include "components/datetime/DateTimeController.h"
#include "components/brightness/BrightnessController.h"


namespace Pinetime {
  namespace Controllers {
    class Battery;
  }

  namespace Applications {
    namespace Screens {

      class QuickSettings : public Screen{
        public:
          QuickSettings(DisplayApp* app, 
            Pinetime::Controllers::Battery& batteryController,
            Controllers::DateTime& dateTimeController,
            Controllers::BrightnessController& brightness);

          ~QuickSettings() override;

          bool Refresh() override;
          bool OnButtonPushed() override;
          bool OnTouchEvent(Pinetime::Applications::TouchEvents event) override;
          void OnButtonEvent(lv_obj_t *object, lv_event_t event);

          void UpdateScreen();

        private:          

          Pinetime::Controllers::Battery& batteryController;
          Controllers::DateTime& dateTimeController;
          Controllers::BrightnessController& brightness;

          lv_task_t* taskUpdate;
          lv_obj_t * batteryIcon;
          lv_obj_t * label_time;

          lv_obj_t * btn1;
          lv_obj_t * btn1_lvl;
          lv_obj_t * btn2;
          lv_obj_t * btn3;
          lv_obj_t * btn3_lvl;
          lv_obj_t * btn4;
          
          uint8_t oldHours = 0;
          uint8_t oldMinutes = 0;
          uint8_t hours;
          uint8_t minutes;
          
          int8_t batteryPercent = -1;

          bool running = true;

      };
    }
  }
}