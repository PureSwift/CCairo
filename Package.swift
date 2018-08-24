// swift-tools-version:3.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

#if os(Linux)
let package = Package(
    name: "CCairo",
    pkgConfig: "cairo",
    providers: [.Brew("cairo"), .Apt("libcairo-dev")]
)
#else
let package = Package(
    name: "CCairo",
    targets: [Target(
            name: "CCairo",
            dependencies: [
                .Target(name: "CPixman")
            ]
        ),
        Target(name: "CPixman")
    ],
    dependencies: [
        .Package(url: "https://github.com/PureSwift/CFontConfig.git", majorVersion: 1),
        .Package(url: "https://github.com/PureSwift/CFreeType.git", majorVersion: 1)
    ]
)
#endif
