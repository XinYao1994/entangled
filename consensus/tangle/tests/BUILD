genrule(
    name = "db_file",
    srcs = ["//common/storage/sql:schema"],
    outs = ["tangle.db"],
    cmd = "$(location @sqlite3//:shell) $@ < $<",
    tools = ["@sqlite3//:shell"],
)

cc_test(
    name = "test_tangle",
    srcs = ["test_tangle.c"],
    data = [":db_file"],
    deps = [
        "//consensus/tangle",
        "//consensus/test_utils",
        "@unity",
    ],
)
