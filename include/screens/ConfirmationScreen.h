#pragma once

#include <Adafruit_GFX.h>

#include "ScreenManager.h"
#include "Screen.h"
#include "State.h"

class ConfirmationScreen : public Screen {
  private:
    GFXcanvas16* canvas;
    ScreenManager* screenManager;
    State* state;

    int select_index = 0;
    float margin = 4;
    int scroll = 0;
    int scroll_speed = 1.0;
    String danger_text = "DANGER!";
    uint16_t text_width = 0;

  public:
    ConfirmationScreen(ScreenManager* screenManager, GFXcanvas16* canvas, State* state);

    void init() override;
    void update() override;
    void draw() override;
};
