// Objective-C API for talking to github.com/Jigsaw-Code/outline-go-tun2socks/outline/shadowsocks Go package.
//   gobind -lang=objc github.com/Jigsaw-Code/outline-go-tun2socks/outline/shadowsocks
//
// File is generated by gobind. Do not edit.

#ifndef __Shadowsocks_H__
#define __Shadowsocks_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class ShadowsocksClient;
@class ShadowsocksConfig;

/**
 * A client object that can be used to connect to a remote Shadowsocks proxy.
 */
@interface ShadowsocksClient : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewClient creates a new Shadowsocks client from a non-nil configuration.

Deprecated: Please use NewClientFromJSON.
 */
- (nullable instancetype)init:(ShadowsocksConfig* _Nullable)config;
/**
 * NewClientFromJSON creates a new Shadowsocks client from a JSON formatted
configuration.
 */
- (nullable instancetype)initFromJSON:(NSString* _Nullable)configJSON;
// skipped field Client.StreamDialer with unsupported type: github.com/Jigsaw-Code/outline-sdk/transport.StreamDialer

// skipped field Client.PacketListener with unsupported type: github.com/Jigsaw-Code/outline-sdk/transport.PacketListener

// skipped method Client.Dial with unsupported parameter or return types

// skipped method Client.ListenPacket with unsupported parameter or return types

@end

/**
 * Config represents a (legacy) shadowsocks server configuration. You can use
NewClientFromJSON(string) instead.

Deprecated: this object will be removed once we migrated from the old
Outline Client logic.
 */
@interface ShadowsocksConfig : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull host;
@property (nonatomic) long port;
@property (nonatomic) NSString* _Nonnull password;
@property (nonatomic) NSString* _Nonnull cipherName;
@property (nonatomic) NSData* _Nullable prefix;
@end

/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksAuthenticationFailure;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksConfigureSystemProxyFailure;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksIllegalConfiguration;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksNoAdminPermissions;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksNoError;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksNoVPNPermissions;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksShadowsocksStartFailure;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksSystemMisconfigured;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksUDPConnectivity;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksUnexpected;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksUnreachable;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksUnsupportedRoutingTable;
/**
 * Error number constants exported through gomobile
 */
FOUNDATION_EXPORT const int64_t ShadowsocksVpnStartFailure;

/**
 * CheckConnectivity determines whether the Shadowsocks proxy can relay TCP and UDP traffic under
the current network. Parallelizes the execution of TCP and UDP checks, selects the appropriate
error code to return accounting for transient network failures.
Returns an error if an unexpected error ocurrs.
 */
FOUNDATION_EXPORT BOOL ShadowsocksCheckConnectivity(ShadowsocksClient* _Nullable client, long* _Nullable ret0_, NSError* _Nullable* _Nullable error);

/**
 * CheckServerReachable determines whether the server at `host:port` is reachable over TCP.
Returns an error if the server is unreachable.
 */
FOUNDATION_EXPORT BOOL ShadowsocksCheckServerReachable(NSString* _Nullable host, long port, NSError* _Nullable* _Nullable error);

/**
 * NewClient creates a new Shadowsocks client from a non-nil configuration.

Deprecated: Please use NewClientFromJSON.
 */
FOUNDATION_EXPORT ShadowsocksClient* _Nullable ShadowsocksNewClient(ShadowsocksConfig* _Nullable config, NSError* _Nullable* _Nullable error);

/**
 * NewClientFromJSON creates a new Shadowsocks client from a JSON formatted
configuration.
 */
FOUNDATION_EXPORT ShadowsocksClient* _Nullable ShadowsocksNewClientFromJSON(NSString* _Nullable configJSON, NSError* _Nullable* _Nullable error);

#endif
