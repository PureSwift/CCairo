import PackageDescription

let package = Package(
    name: "CCairo",
    pkgConfig: "cairo",
    providers: [.Brew("cairo"), .Apt("cairo")]
)
