# C++ Tutorial — Bazel

A Hello World C++ project built with [Bazel](https://bazel.build/).

## Prerequisites

- [Bazel](https://bazel.build/install) or [Bazelisk](https://github.com/bazelbuild/bazelisk)

## Build

```bash
bazel build //:hello
```

## Run

```bash
bazel run //:hello
```

Expected output:

```
Hello, World!
```

## Project Structure

```
.
├── BUILD.bazel      # Bazel build rules
├── MODULE.bazel     # Bazel module definition
├── main.cpp         # Entry point
└── README.md
```
