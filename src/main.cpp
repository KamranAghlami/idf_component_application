#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include "application/application.h"

extern "C" void app_main(void)
{
    auto application = create_application();

    while (application->is_running())
        vTaskDelay(pdMS_TO_TICKS(lv_timer_handler()));

    esp_restart();
}