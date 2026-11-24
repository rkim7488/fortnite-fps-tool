// main.cpp — entry point. Wires config and subsystems together.

#include "fortnitefpstool/settings.h"
#include "fortnitefpstool/tuner.h"
#include "fortnitefpstool/lagfix.h"
#include "fortnitefpstool/profiles.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    fortnitefpstool::Settings settings = fortnitefpstool::Settings::load_default();
    fortnitefpstool::Tuner tuner(settings.store_path);
    fortnitefpstool::Lagfix lagfix(settings.store_path);
    fortnitefpstool::Profiles profiles(settings.store_path);
    std::fprintf(stderr, "[fortnite-fps-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
