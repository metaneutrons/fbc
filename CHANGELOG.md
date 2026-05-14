# Changelog

## [1.11.0](https://github.com/metaneutrons/fbc/compare/v1.10.3...v1.11.0) (2026-05-14)


### Features

* 68000 support - FreeBASIC runs on A500/A600/A1000! ([bd1ee0a](https://github.com/metaneutrons/fbc/commit/bd1ee0a9da045b1854b408c08e631117183fddce))
* add Amiga/AROS/MorphOS/AmigaOS4 target definitions ([a48a0cb](https://github.com/metaneutrons/fbc/commit/a48a0cb60789a09f35debd638fcc40a8e8431c58))
* add default libraries for Amiga targets ([e917dc4](https://github.com/metaneutrons/fbc/commit/e917dc48a632f8fbb0fb66117f52c8d633782017))
* add shell completion scripts ([5714d10](https://github.com/metaneutrons/fbc/commit/5714d10adb21ba0d5d65d7d497ac32f509bb95ff))
* add shell completion scripts ([7f08314](https://github.com/metaneutrons/fbc/commit/7f083147fa57db4feafc6c2ea9fdd9662997ea05))
* AmigaOS m68k rtlib port - Hello World works ([5be6cf2](https://github.com/metaneutrons/fbc/commit/5be6cf23bd2e595c3c2ecd74dd2f5d7dfd4902b1))
* complete Amiga build pipeline with vamos testing ([17b54d3](https://github.com/metaneutrons/fbc/commit/17b54d3f71d19d2bc1254d00b4815692a0d13d29))
* complete Amiga target support in compiler ([3b75ada](https://github.com/metaneutrons/fbc/commit/3b75ada542f8ffa6b7133ba9ed152c6ce5550770))
* File I/O and Input for AmigaOS ([f8026c5](https://github.com/metaneutrons/fbc/commit/f8026c522a7e62639a0f539b9bf73c4691253e33))
* Float support and improved Input for AmigaOS ([493063e](https://github.com/metaneutrons/fbc/commit/493063e6aa8f33358383492e0efc3293a7be1587))
* FreeBASIC Print works on AmigaOS m68k! ([45d0917](https://github.com/metaneutrons/fbc/commit/45d09179d8eea605ad55bf24889ad04332aa0e6c))
* full FreeBASIC runtime for AmigaOS - loops, strings, math work! ([50aa5a0](https://github.com/metaneutrons/fbc/commit/50aa5a0d1216105a1696f681430f28b46a96d106))
* full libfb.a works on AmigaOS + Sleep/Timer ([9bb6929](https://github.com/metaneutrons/fbc/commit/9bb6929c60eaebca8e7beb79f4f144fff0efc255))
* soft-float support for 68020 without FPU ([1b130fc](https://github.com/metaneutrons/fbc/commit/1b130fcda229ca21db45a0a4637c2880ddc59d7c))


### Bug Fixes

* libfb.a works cleanly without overrides! ([6eb67dc](https://github.com/metaneutrons/fbc/commit/6eb67dcefb4176eef6ad729ccd709a8437cee316))
* skip signals and thread init on AmigaOS ([c0812ab](https://github.com/metaneutrons/fbc/commit/c0812abcea98949f2e2913057fc32e62bfba32c5))

## [1.10.2](https://github.com/metaneutrons/fbc/compare/1.10.1...v1.10.2) (2026-05-09)

### Features

* CMake build system with cross-platform bootstrap
* macOS Apple Silicon (arm64) support
* Automatic clang computed-goto compatibility
* GitHub Actions CI for Linux, macOS, Windows
* Pre-generated bootstrap C sources for linux-x86_64, linux-aarch64, win64
