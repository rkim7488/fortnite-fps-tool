// profiles.cpp — part of fortnite-fps-tool.

#include "fortnitefpstool/profiles.h"

#include <cstdio>

namespace fortnitefpstool {

Profiles::Profiles(const std::string& config_path)
    : config_path_(config_path) {}

void Profiles::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Profiles::run() {
    if (verbose_) std::fprintf(stderr, "[fortnite-fps-tool] profiles: run\n");
    // core logic lives here
    return true;
}

}  // namespace fortnitefpstool
