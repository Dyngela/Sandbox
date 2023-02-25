#include "core.h"

int main() {
    NE::Log::Init();
    NE_CORE_WARN("Log initialise");
    NE::parser::init();
    return 0;
}


