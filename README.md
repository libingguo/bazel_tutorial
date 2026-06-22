# Bazel Tutorial

A hands-on C++ project for learning the [Bazel](https://bazel.build) build system, plus a reference to the official Bazel examples.

## Contents

| Directory | Description |
|---|---|
| `helloworld/` | Multi-package C++ project demonstrating core Bazel concepts |
| `examples/` | Official [bazelbuild/examples](https://github.com/bazelbuild/examples) (submodule) |

## Quick Start

### Prerequisites

- [Bazel](https://bazel.build/install) or [Bazelisk](https://github.com/bazelbuild/bazelisk)
- A C++ compiler (GCC or Clang)

### Build and run

```bash
cd helloworld
bazel build //...
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
gcd(48, 18)     = 6
power(2, 10)    = 1024
```

### Run tests

```bash
bazel test //tests:all
```

## Key Bazel Concepts Covered

| Concept | Where |
|---|---|
| `MODULE.bazel` — workspace root + external deps | `helloworld/MODULE.bazel` |
| `cc_library` — reusable compiled artifact | `helloworld/lib/BUILD.bazel` |
| `cc_binary` — executable consuming a library | `helloworld/BUILD.bazel` |
| `cc_test` — test target with GoogleTest | `helloworld/tests/BUILD.bazel` |
| Labels (`//lib:math_utils`) — cross-package deps | `deps` attributes |
| `visibility` — access control between packages | `helloworld/lib/BUILD.bazel` |
| Target wildcards (`//...`, `//tests:all`) | Build/test commands above |

## Cloning

This repo uses a git submodule for `examples/`. Clone with:

```bash
git clone --recurse-submodules https://github.com/libingguo/bazel_tutorial.git
```
