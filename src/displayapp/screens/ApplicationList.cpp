#include "ApplicationList.h"
#include <lvgl/lvgl.h>
#include <array>
#include "Symbols.h"
#include "Tile.h"
#include "displayapp/Apps.h"
#include "../DisplayApp.h"

using namespace Pinetime::Applications::Screens;

LV_IMG_DECLARE(icon_settings);
LV_IMG_DECLARE(icon_information);
LV_IMG_DECLARE(icon_phone);
LV_IMG_DECLARE(icon_brightness);

LV_IMG_DECLARE(icon_music);
LV_IMG_DECLARE(icon_game);
LV_IMG_DECLARE(icon_running);
LV_IMG_DECLARE(icon_heart_rate);

ApplicationList::ApplicationList(Pinetime::Applications::DisplayApp *app, Pinetime::Controllers::DateTime& dateTimeController) :
        Screen(app),
        screens{app, {
                [this]() -> std::unique_ptr<Screen> { return CreateScreen1(); },
                [this]() -> std::unique_ptr<Screen> { return CreateScreen2(); }
                //[this]() -> std::unique_ptr<Screen> { return CreateScreen3(); }
          }
        },
        dateTimeController{dateTimeController}
        {

}


ApplicationList::~ApplicationList() {
  lv_obj_clean(lv_scr_act());
}

bool ApplicationList::Refresh() {
  if(running)
    running = screens.Refresh();
  return running;
}

bool ApplicationList::OnButtonPushed() {
  running = false;
  app->StartApp(Apps::Clock);
  return true;
}

bool ApplicationList::OnTouchEvent(Pinetime::Applications::TouchEvents event) {
  return screens.OnTouchEvent(event);
}

std::unique_ptr<Screen> ApplicationList::CreateScreen1() {
  std::array<Screens::Tile::Applications, 4> applications {
          {                        
            {&icon_settings,    "Firmware",       Apps::Gauge},
            {&icon_information, "Sysinfo",        Apps::SysInfo},            
            {&icon_phone,       "Notifications",  Apps::Notifications},
            {&icon_brightness,  "Brightness",     Apps::Brightness}
          }

  };

  return std::unique_ptr<Screen>(new Screens::Tile(app, dateTimeController, applications));
}

std::unique_ptr<Screen> ApplicationList::CreateScreen2() {
  std::array<Screens::Tile::Applications, 4> applications {
          {                        
            {&icon_music,       "Music",      Apps::Music},
            {&icon_game,        "Paint",      Apps::Paint},            
            {&icon_running,     "Steps",      Apps::Meter},
            {&icon_heart_rate,  "Heart Rate", Apps::Meter}
          }

  };

  return std::unique_ptr<Screen>(new Screens::Tile(app, dateTimeController, applications));
}

/*
std::unique_ptr<Screen> ApplicationList::CreateScreen2() {
  std::array<Screens::Tile::Applications, 6> applications {
          {{Symbols::tachometer, Apps::Gauge},
           {Symbols::asterisk, Apps::Meter},
           {Symbols::paintbrush, Apps::Paint},
                  {Symbols::info, Apps::Notifications},
                  {Symbols::none, Apps::None},
                  {Symbols::none, Apps::None}
          }
  };

  return std::unique_ptr<Screen>(new Screens::Tile(app, applications));
}

std::unique_ptr<Screen> ApplicationList::CreateScreen3() {
  std::array<Screens::Tile::Applications, 6> applications {
          {{"A", Apps::Meter},
           {"B", Apps::Gauge},
           {"C", Apps::Clock},
           {"D", Apps::Music},
           {"E", Apps::SysInfo},
           {"F", Apps::Brightness}
          }
  };

  return std::unique_ptr<Screen>(new Screens::Tile(app, applications));
}
*/
