# C++ Tutorial — Bazel

A multi-package C++ project demonstrating key Bazel build system concepts.

## Prerequisites

- [Bazel](https://bazel.build/install) or [Bazelisk](https://github.com/bazelbuild/bazelisk)

## Build

```bash
bazel build //...
```

## Run

```bash
bazel run //:hello
```

Expected output:

```
Hello, World!

add(3, 4)       = 7
subtract(10, 3) = 7
multiply(6, 7)  = 42
divide(22, 7)   = 3.14286
factorial(5)    = 120
```

## Test

```bash
bazel test //tests:all
```

## Project Structure

```
.
├── MODULE.bazel             # Workspace root + external dependency declarations
├── BUILD.bazel              # cc_binary — main executable, depends on //lib:math_utils
├── main.cpp                 # Entry point
├── lib/
│   ├── BUILD.bazel          # cc_library — reusable math utilities (public visibility)
│   ├── math_utils.h
│   └── math_utils.cpp
└── tests/
    ├── BUILD.bazel          # cc_test — depends on //lib:math_utils
    └── math_utils_test.cpp
```

## Key Bazel Concepts

| Concept | Where |
|---|---|
| `MODULE.bazel` — workspace root + external deps | `MODULE.bazel` |
| `cc_library` — reusable compiled artifact | `lib/BUILD.bazel` |
| `cc_binary` — executable consuming a library | `BUILD.bazel` |
| `cc_test` — test target (passes if exit code is 0) | `tests/BUILD.bazel` |
| Labels (`//lib:math_utils`) — cross-package deps | `deps` attributes |
| `visibility` — access control between packages | `lib/BUILD.bazel` |

## Target Wildcards

```bash
bazel build //:hello          # specific target
bazel build //tests:all       # all targets in a package
bazel build //...             # all targets in the workspace
```
