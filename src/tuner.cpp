// tuner.cpp — part of fortnite-fps-tool.

#include "fortnitefpstool/tuner.h"

#include <cstdio>

namespace fortnitefpstool {

Tuner::Tuner(const std::string& config_path)
    : config_path_(config_path) {}

void Tuner::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tuner::run() {
    if (verbose_) std::fprintf(stderr, "[fortnite-fps-tool] tuner: run\n");
    // core logic lives here
    return true;
}

}  // namespace fortnitefpstool
