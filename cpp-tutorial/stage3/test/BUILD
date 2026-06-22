load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "hello-greet-test",
    srcs = ["hello-greet-test.cc"],
    deps = [
        "//main:hello-greet",
    ],

)

cc_test(
    name = "hello-time-test",
    srcs = ["hello-time-test.cc"],
    deps = [
        "//lib:hello-time",
    ],
)