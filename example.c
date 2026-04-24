#define LOG_FILE_PATH "app.log"

#define Z_LOG_IMPLEMENTATION
#include "z-log.h"
#include <unistd.h>
int main() {
    Z_LOG_INIT();
    
    INFO("Logger initialized");
    
    for (int i = 0; i < 5; i++) {
        INFO("This is log message %d, %s", i, "hello z-log");
        DEBUG("Debug message %d", i);
        WARN("Warning message %d", i);
        usleep(100000);
    }
    
    ERROR("This is an error message");
    
    sleep(1);
    Z_LOG_EXIT();
    
    return 0;
}
