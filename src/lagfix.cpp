// lagfix.cpp — part of fortnite-fps-tool.

#include "fortnitefpstool/lagfix.h"

#include <cstdio>

namespace fortnitefpstool {

Lagfix::Lagfix(const std::string& config_path)
    : config_path_(config_path) {}

void Lagfix::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Lagfix::run() {
    if (verbose_) std::fprintf(stderr, "[fortnite-fps-tool] lagfix: run\n");
    // core logic lives here
    return true;
}

}  // namespace fortnitefpstool
