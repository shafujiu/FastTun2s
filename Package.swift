// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "FastTun2s",
    platforms: [
        .iOS(.v14), // 根据需要设置最低版本
    ],
    products: [
        .library(
            name: "FastTun2s",
            targets: ["FastTun2sTarget"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FastTun2sTarget",
            path: "Frameworks/FaIconTun2socks.xcframework" // 路径指向你的 xcframework 文件
        )
    ]
)

